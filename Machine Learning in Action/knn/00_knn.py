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
import math
import numpy as np


def transform_to_numpy_data():
    """
    将原始数据转换成numpy数组，将人的分类转换成标签
    :return:
    """
    base_path = os.path.abspath(os.path.dirname(__file__))
    data_path = os.path.join(base_path, 'datingTestSet2.txt')
    init_array = np.zeros((1000, 3))
    label = []
    with open(data_path, 'r') as f:
        for index, line in enumerate(f.readlines()):
            raw_data = line.split('\t')
            useful_data = raw_data[0:3]
            label_data = raw_data[-1].replace('\n', '')
            init_array[index] = useful_data
            label.append(label_data)
    return init_array, label


def knn(test_data, init_array, label):
    """
    :param test_data: array input
    :param init_array:
    :param label
    :return:
    """
    distance_result = []
    category_result = []
    row_length = init_array.shape[0]
    for row_index in range(row_length):
        train_data = init_array[row_index]
        # print(train_data[0], train_data[1], train_data[2])
        if not (train_data == test_data).all():
            print(train_data[0], train_data[1], train_data[2])
            distance = math.sqrt((train_data[0] - test_data[0])**2+(train_data[1] - test_data[1])**2+(train_data[2] - test_data[2])**2)
            print(distance)
            distance_result.append(distance)
            category = label[row_index]
            category_result.append(category)
    sorted_result = sorted(distance_result)
    return sorted_result, category_result


def main():
    """
    70843	7.436056	1.479856
    随便挑选一个数据，与其它数据进行欧氏距离的两两计算
    然后选出排名前20的最短欧氏距离，看属于哪个类别的最多
    :return:
    """
    # transform_to_numpy_data()
    test_data = np.array([70843, 7.436056, 1.479856])
    # print(test_data)
    # print(type(test_data))
    init_array, label = transform_to_numpy_data()
    print(label)
    distance_res, category_res = knn(test_data, init_array, label)
    print('@@@')
    print(category_res)
    print('@@@')
    print(distance_res, category_res)
    print(len(distance_res))
    """
    取前20个结果
    """
    top_twenty_distance_res = distance_res[0:20]
    top_twenty_category_res = category_res[0:20]
    print(top_twenty_distance_res)
    print(top_twenty_category_res)
    one_count = top_twenty_category_res.count('1')
    two_count = top_twenty_category_res.count('2')
    three_count = top_twenty_category_res.count('3')
    print(one_count)
    print(two_count)
    print(three_count)
    """
    由于算出one_count = 12, two_count = 3, three_count = 5所以最终预测类别为1
    最终结果也确实是对的
    """


if __name__ == '__main__':
    main()
