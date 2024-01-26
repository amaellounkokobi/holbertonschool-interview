#!/usr/bin/python3
"""
This module contains :

Given a number n, write a method that calculates the fewest number
of operations needed to result in exactly n H characters in the file.

Function:
   def minOperations(n)
"""


def minOperations(n):
    """
    Given a number n, write a method that calculates the fewest number
    of operations needed to result in exactly n H characters in the file.

    Args:
       n:number of operations
    """
    
    if n <= 1:
        return 0
    else:
        for num in range(n-1, 2, -1):
            if n % num == 0:
                return int((n / num) + num)
        else:
            return n
