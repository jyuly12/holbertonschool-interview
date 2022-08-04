#!/usr/bin/python3
"""
Defines the function that representing the Pascal’s triangle.
"""

def pascal_triangle(n):
    """
    Returns a list of lists of integers representing
    the Pascal’s triangle of n
    """

    if n <= 0:
        return []
    
    newTriangle = [[1]]
    while len(newTriangle) != n:
        previous = newTriangle[-1]
        current = [1]
        for i in range(len(previous) - 1):
            current.append(previous[i] + previous[i + 1])
        current.append(1)
        newTriangle.append(current)
    return newTriangle