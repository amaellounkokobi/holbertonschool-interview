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
    unlocked_boxes = {0:'unlocked'}
    
    for number, box in enumerate(boxes):
        if number in unlocked_boxes:
            for key in box:
                if key not in unlocked_boxes:
                    unlocked_boxes[key] = 'unlocked'
                    for box_key in boxes[key]:
                        if box_key not in unlocked_boxes:
                            unlocked_boxes[box_key] = 'unlocked'

    if len(boxes) == len(unlocked_boxes):
        return True
    else:
        return False

