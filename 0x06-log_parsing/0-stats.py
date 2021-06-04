#!/usr/bin/python3
"""Script that reads stdin line by line and computes metrics."""
from collections import Counter, OrderedDict
from sys import stdin


def print_metrics(list_metrics, file_size):
    """print metrics size file and amount of status code"""
    count_scode = Counter(list_metrics)
    print(f"File size: {file_size}")
    sorted_items = OrderedDict(sorted(count_scode.items()))
    for key, value in sorted_items.items():
        print(f"{key}: {value}")


if __name__ == "__main__":
    """pasing metrics of a file or server."""
    try:
        check = 1
        fsize = 0
        scode = []
        for line in stdin:
            try:
                scode.append(int(line.split(" ")[7]))
                fsize += int(line.split(" ")[8])
            except:
                pass
            if check == 10:
                print_metrics(scode, fsize)
                check = 0
            check += 1
    except KeyboardInterrupt:
        print_metrics(scode, fsize)
        raise
    print_metrics(scode, fsize)
