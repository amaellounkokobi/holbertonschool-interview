#!/usr/bin/python3
"""
This module contains :

Given a number n, write a method that calculates the fewest number
of operations needed to result in exactly n H characters in the file.

Function:
   def minOperations(n)
"""
def is_prime(n):
    """
    Is a prime number
    """
    for num in range(2, n):
        if n % num == 0:
            return False
    return True

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
            if n % num == 0 and is_prime(num):
                return int((n / num) + num)
        else:
            return n
