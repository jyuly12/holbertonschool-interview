#!/usr/bin/python3
"""
    Count operation number
"""


def minOperations(n):
    """
        This code calculates the number of operations (copy and paste)
        that must be carried out to obtain the given number
    """
    number = 2
    count = 0
    if n == 0:
        return 0
    while (count <= n):
        if (n % number):
            n = int(n / number)
            count += number
            number = 1
        count += 1
    return (count)
