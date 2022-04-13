#!/usr/bin/python3
"""
This module defines the rain function
"""


def rain(walls):
    """
    Given a list of non-negative integers representing
    the heights of walls with unit width 1, as if viewing
    the cross-section of a relief map, calculate how many
    square units of water will be retained after it rains.

    parameter:
        walls: is a list of non-negative integers.
    """
    count = 0
    large_arr = len(walls)

    for i in range(1, large_arr - 1):
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])
            right = walls[i]

        for j in range(i + 1, large_arr):
            right = max(right, walls[j])

        count = count + (min(left, right) - walls[i])
    return count
