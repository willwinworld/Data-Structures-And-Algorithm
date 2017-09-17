import json
import requests
from functools import wraps
from pyquery import PyQuery as Pq


class DouBan(object):
    def __init__(self, url):
        self.url = url

    def fetch(self):
        r = requests.get(self.url)
        d = Pq(r.content).make_links_absolute(base_url=self.url)
        page_one_film_url = [i.attr('href') for i in d('.grid_view .pic a').items()]
        other_page_url = [i.attr('href') for i in d('.paginator').remove('.next').find('a').items()]
        return page_one_film_url, other_page_url

    def other(self, page_one_film_url, other_page_url):
        all_film_url = []
        all_film_url.extend(page_one_film_url)
        for o_p_url in other_page_url:
            r = requests.get(o_p_url)
            d = Pq(r.content).make_links_absolute(base_url=o_p_url)
            other_page_film_url = [i.attr('href') for i in d('.grid_view .pic a').items()]
            all_film_url.extend(other_page_film_url)
            break
        return all_film_url

    def parse(self, all_film_url):
        res = []
        for url in all_film_url:
            r = requests.get(url)
            print(url)
            d = Pq(r.content).make_links_absolute(base_url=url)
            brief = d('.all.hidden').text()
            res.append({url: brief})
            break
        return res

    def save(self, result):
        with open('test.json', 'w') as f:
            save_format = json.dumps(result, sort_keys=True, indent=4)
            f.write(save_format)

if __name__ == '__main__':
    douban = DouBan('https://movie.douban.com/top250')
    a, b = douban.fetch()
    c = douban.other(a, b)
    d = douban.parse(c)
    douban.save(d)


    def cache(func):
        saved = {}

        @wraps(func)
        def wrapper(url):
            if url in saved:
                return saved[url]
            else:
                content = func(url)
                saved[url] = content
            return wrapper


    def log(level):
        def outer(func):
            def inner(*args, **kwargs):
                if level == 'warn':
                    print("%s is running" % func.__name__)
                return inner
            return outer

    def cal(x, y):
        def sum():
            return x + y
        return sum

if __name__ == '__main__':
    print(0 == False)