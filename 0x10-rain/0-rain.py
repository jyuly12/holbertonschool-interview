#!/usr/bin/python3


def rain(walls):
    count = 0

    for i in range(1, len(walls) - 1):
        left = walls[i]
    for j in range(i):
        left = max(left, walls[j])
        right = walls[i]

    for j in range(i + 1, len(walls)):
        right = max(right, walls[j])

    count = count + (min(left, right) - walls[i])
    return count
