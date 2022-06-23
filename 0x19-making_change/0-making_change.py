#!/usr/bin/python3
"""Making change moduls"""
import sys


def makeChange(coins, total):

    if (total <= 0):
        return 0

    array = [0] * (total + 1)     
    for i in range(1, total + 1):
        array[i] = sys.maxsize
        for j in range(len(coins)):
            if (coins[j] <= i):
                changes = array[i - coins[j]]
                if (changes != sys.maxsize and changes + 1 < array[i]):
                    array[i] = changes + 1
    if array[total] == sys.maxsize:
        return -1
    return array[total]
