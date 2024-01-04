#!/usr/bin/python3
"""
This module contains:
An algorithm that determines if all the boxes can be opened.

Examples:
boxes = [[1], [2], [3], [4], []]
print(canUnlockAll(boxes))

boxes = [[1, 4, 6], [2], [0, 4, 1], [5, 6, 2], [3], [4, 1], [6]]
print(canUnlockAll(boxes))

boxes = [[1, 4], [2], [0, 4, 1], [3], [], [4, 1], [5, 6]]
print(canUnlockAll(boxes))

Function:
def canUnlockAll(boxes)
"""


def canUnlockAll(boxes):
    """
    An algorithm that determines if all the boxes can be opened.

    Args:
       boxes: is a list of lists
    """
    o_bxs = [0]

    for num, box in enumerate(boxes):
        if num in o_bxs:
            for key in box:
                if key not in o_bxs and key < len(boxes):
                    o_bxs.append(key)
                    for b_key in boxes[key]:
                        if b_key not in o_bxs and b_key < len(boxes):
                            o_bxs.append(b_key)

    if len(boxes) == len(o_bxs):
        return True
    else:
        return False
