#!/usr/bin/python3
""" calculate amount water retained between two walls
"""


def rain(walls) -> int:
    """ rain calculates

    Args:
        walls (list): non-negative integers representing
        the heights of walls with unit width 1

    Returns:
        [int]: represent the sum of all water retained
    """
    if not isinstance(walls, list):
        return 0

    if walls == [None] or walls == []:
        return 0

    set_walls = set(walls)
    if set_walls == {0, 1} or set_walls == {1} \
       or set_walls == {0}:
        return 0

    list1 = []
    list2 = []
    for i, v in enumerate(walls, 1):
        if v != 0:
            list1.append(i)
            list2.append(v)

    add = 0
    for j in range(len(list1)):
        i1 = list1[j]
        if j < len(list1) - 1:
            i2 = list1[j+1]
        index = i2 - i1 - 1
        v1 = list2[j]
        if j < len(list1) - 1:
            v2 = list2[j + 1]
        value = v1 if v1 < v2 else v2
        add += index * value
        if j+1 == len(list1) - 1:
            return add
