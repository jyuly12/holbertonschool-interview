#!/usr/bin/python3
""" This module defines rotate_2s_matrix function
"""


def rotate_2d_matrix(matrix):
    """
        Given an n x n 2D matrix
        Rotate it 90 degrees clockwise.
    """

    number = len(matrix)
    temp = []

    for i in range(number):
        for j in range(number - 1, -1, -1):
            temp.append(matrix[j][i])

    for i in range(number):
        for j in range(number):
            matrix[i][j] = temp.pop(0)
