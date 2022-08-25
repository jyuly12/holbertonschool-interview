#!/usr/bin/python3
""" this program verify why is the winner in Prime Game
"""


def isWinner(x, nums):
    """ return the game winner.

        parameters:

            x : number of rounds.
            nums: nums is an array of n.
    """
    if not nums or x < 1:
        return None

    n = max(nums)

    rule = [True for _ in range(max(n + 1, 2))]

    for i in range(2, int(pow(n, 0.5)) + 1):
        if not rule[i]:
            continue
        for j in range(i * i, n + 1, i):
            rule[j] = False

    rule[0] = rule[1] = False
    c = 0
    for i in range(len(rule)):
        if rule[i]:
            c += 1
        rule[i] = c
    plyr1 = 0
    for n in nums:
        plyr1 += rule[n] % 2 == 1
    if plyr1 * 2 == len(nums):
        return None
    if plyr1 * 2 > len(nums):
        return "Maria"
    return "Ben"
