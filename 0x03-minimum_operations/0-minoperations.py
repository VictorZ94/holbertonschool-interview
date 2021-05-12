#!/usr/bin/python3
""" to count min operations
"""


def minOperations(n):
    """ to count min operations
    """
    iter = 1
    sum_of_prime = 0
    while n > 1:
        if n % iter == 0 and iter != 1:
            n //= iter
            sum_of_prime += iter
            iter = 1
        iter += 1
    return (sum_of_prime)
