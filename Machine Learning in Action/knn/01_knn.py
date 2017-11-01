#! python3
# -*- coding: utf-8 -*-
import numpy as np
from numpy import zeros


def file2matrix(filename):
    """
    Desc:
        导入训练数据
    :param filename: 数据文件路径
    :return: 数据矩阵 returnMat 和相对应的类别 classLabelVector
    """
    f = open(filename)
    number_of_lines = len(f.readlines())
    f.close()
    return_mat = zeros((number_of_lines, 3))
    class_label_vector = []
    with open(filename, 'r') as f:
        index = 0
        for line in f.readlines():
            line = line.strip()
            line_list = line.split('\t')
            return_mat[index, :] = line_list[0:3]
            class_label_vector.append(int(line_list[-1]))
            index += 1
    return return_mat, class_label_vector


"""
本节重点，归一化处理，将取值范围处理为0到1或者-1到1之间
new_value = (old_value - min) / (max - min)

tile方法: 
numpy.tile([0,0],(1,3)) 在行方向上重复[0,0]1次，在列方向上重复3次 array([[0,0,0,0,0,0]])
numpy.tile([0,0],(2,1)) 在行方向上重复[0,0]2次，在列方向上重复1次 array([[0,0],
                                                                    [0,0]])
"""


def auto_norm(data_set):
    print(type(data_set))
    min_val = data_set.min(0)
    print(min_val)
    max_val = data_set.max(0)
    print(max_val)
    ranges = max_val - min_val
    norm_data_set = np.zeros(np.shape(data_set))
    print(norm_data_set)
    m = data_set.shape[0]
    norm_data_set = data_set - np.tile(min_val, (m, 1))
    print(norm_data_set)
    norm_data_set = norm_data_set / np.tile(ranges, (m, 1))
    return norm_data_set, ranges, min_val


def dating_class_test():
    ho_ratio = 0.1
    dating_data_mat, dating_label = file2matrix('datingTestSet2.txt')
    norm_mat, ranges, min_val = auto_norm(dating_data_mat)
    m = norm_mat.shape[0]  # 矩阵的行数
    num_test_vec = int(m*ho_ratio)
    print('num_test_vec=', num_test_vec)


def main():
    return_mat, class_label_vector = file2matrix('datingTestSet2.txt')
    auto_norm(return_mat)


if __name__ == '__main__':
    main()
