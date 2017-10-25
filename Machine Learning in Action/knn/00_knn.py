#! python3
# -*- coding: utf-8 -*-
"""
优化约会网站的配对效果
使用欧氏距离来实现

每年获得的飞行常客里程数    玩视频游戏所耗时间百分比    每周消费的冰淇淋公升数   属于什么类型的人
       40920	              8.326976	             0.953952	            3
       14488	              7.153469	             1.673904	            2
       26052	              1.441871	             0.805124	            1

1.工作日与魅力一般的人约会
2.周末与极具魅力的人约会
3.不喜欢的人则直接排除掉

那么最终目标就是给出一个3列的数据，然后去判断是属于什么类型的人
"""
import os
from numpy import *


def transform_to_numpy_data():
    """
    将原始数据转换成numpy二维数组，将人的分类转换成标签
    :return:
    """
    base_path = os.path.abspath(os.path.dirname(__file__))
    data_path = os.path.join(base_path, 'datingTestSet2.txt')
    print(base_path)
    print(data_path)
    with open(data_path, 'r') as f:
        for line in f.readlines():
            print(line)
            # print('aaa')
            break


def main():
    transform_to_numpy_data()


if __name__ == '__main__':
    main()
