#!/usr/bin/python3
"""
Test UTF-8
"""


def validUTF8(data):
    """
    Test UTF-8
    """
    for i in data:
        if i >= 256:
            return False
    return True
