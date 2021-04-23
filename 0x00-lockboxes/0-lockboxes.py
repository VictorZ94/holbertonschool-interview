# #!/usr/bin/python3
"""lockboxes: find whether a boxes can open or not.
"""


def canUnlockAll(boxes):
    """lockboxes: find whether a boxes can open or not.
    """
    length_box = len(boxes)
    check_list = [0]
    for check_value in check_list:
        for value_into_boxes in boxes[check_value]:
            if value_into_boxes not in check_list and\
             value_into_boxes < length_box:
                check_list.append(value_into_boxes)

    if len(check_list) == length_box:
        return True
    else:
        return False
