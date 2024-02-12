#!/usr/bin/python3
"""
This module contains :
A script that reads stdin line by line and computes metrics:
   # Read STDIN
   # Get the line ( or lines)
   # Print statistics
   # Print computed file size
   # File size: <total size>
   # Print status codes
   # <status code>: <number>

"""
import sys


def parse_lines(lines_array):
    """
    Parsing array return results

    Args:
    lines_array lines to parse
    """
    file_size = 0
    status_list = []
    status_tab = [200,
                  301,
                  400,
                  401,
                  403,
                  404,
                  405,
                  500]

    for line in lines_array:
        infos = line.split(" ")
        file_size += int(infos[8])
        status_list.append(int(infos[7]))

    print("File size:", file_size)

    for status in status_tab:
        counter = status_list.count(status)
        if counter != 0:
            print('{}: {}'.format(status, counter))

# Array that will containes lines
buffer_array = []

try:
    for line in sys.stdin:
        # Read STDIN get the lines
        line = line.rstrip()
        buffer_array.append(line)

        if len(buffer_array) == 10:
            parse_lines(buffer_array)
            buffer_array.clear()

except KeyboardInterrupt:
    parse_lines(buffer_array)
