#!/usr/bin/python3
"""
    Count operation number
"""


def minOperations(n):
    """
        This code calculates the number of operations (copy and paste)
        that must be carried out to obtain the given number
    """
    if n <= 1:
        return 0
    num, div, numOfOperations = n, 2, 0

    while num > 1:
        if num % div == 0:
            num = num / div
            numOfOperations = numOfOperations + div
        else:
            div += 1
    return numOfOperations
