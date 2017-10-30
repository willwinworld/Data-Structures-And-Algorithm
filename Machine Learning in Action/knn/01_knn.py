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
    with open(filename) as f:
        numberOfLines = len(f.readlines())
    returnMat =