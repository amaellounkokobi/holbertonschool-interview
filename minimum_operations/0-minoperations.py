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
    if n < 1:
        return 0
    elif n % 2 == 0:
        return (n / 2) + 2
    elif n % 3 == 0:
        return (n / 3) + 3
    else:
        return n_op
