#! python3
# -*- coding: utf-8 -*-

"""实现Queue类
   1.实现入队
   2.实现出队
"""


class Queue(object):
    def __init__(self):
        self.queue = []

    def enqueue(self, element):
        self.queue.append(element)

    def dequeue(self):
        return self.queue.pop(0)


if __name__ == '__main__':
    q = Queue()
    q.enqueue(1)
    q.enqueue(2)
    q.enqueue(3)

    print(q.queue)
    print(q.dequeue())
    print(q.dequeue())
    print(q.dequeue())