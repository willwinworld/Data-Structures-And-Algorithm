#!/usr/bin/env python
# -*- coding: utf-8 -*-
import requests
from functools import wraps


def cache(func):
    saved = {}

    @wraps(func)
    def wrapper(url):
        if url in saved:
            return saved[url]
        else:
            content = func(url)
            saved[url] = content
            return content
    return wrapper


@cache
def web_lookup(url):
    return requests.get(url).content




