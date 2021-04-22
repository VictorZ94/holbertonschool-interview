#!/usr/bin/python3
"""lockboxes: find whether a boxes can open or not.
"""


def canUnlockAll(boxes):
    """lockboxes: find whether a boxes can open or not.
    """
    if boxes is not list:
        return False
    length_boxes = len(boxes)
    check_list = list(map(lambda num: num + 1, range(length_boxes)))
    i = 0
    while i < length_boxes:
        j = 0
        while j < len(boxes[i]):
            if boxes[i][j] in check_list:
                break
            j += 1
        if len(boxes[i]) > 0 and j != len(boxes[i]):
            check_list.remove(boxes[i][j])
        i += 1

    if len(check_list) == 1:
        return True
    else:
        return False
