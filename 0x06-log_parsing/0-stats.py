#!/usr/bin/python3
"""Script that reads stdin line by line and computes metrics."""
from sys import stdin


status_code = {'200': 0, '301': 0,
               '400': 0, '401': 0,
               '403': 0, '404': 0,
               '405': 0, '500': 0}


def print_metrics(list_metrics, file_size):
    """print metrics size file and amount of status code"""
    print(f"File size: {file_size}")
    for code in list_metrics:
        if code in status_code.keys():
            status_code[code] += 1

    for key, value in status_code.items():
        if value > 0:
            print(f"{key}: {value}")


if __name__ == "__main__":
    """pasing metrics of a file or server."""
    try:
        check = 0
        fsize = 0
        scode = []
        for line in stdin:
            scode.append(line.split(" ")[7])
            fsize += int(line.split(" ")[8])
            check += 1
            if check % 10 == 0:
                print_metrics(scode, fsize)
                scode = []
    except KeyboardInterrupt:
        print_metrics(scode, fsize)
        raise
    print_metrics(scode, fsize)
