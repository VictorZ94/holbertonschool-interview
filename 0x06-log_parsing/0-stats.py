#!/usr/bin/python3
"""Script that reads stdin line by line and computes metrics."""
from sys import stdin


status_code = {200: 0, 301: 0,
               400: 0, 401: 0,
               403: 0, 404: 0,
               405: 0, 500: 0}

# def print_metrics(list_metrics, file_size):
#     """print metrics size file and amount of status code"""
#     count_scode = Counter(list_metrics)
#     print(f"File size: {file_size}")
#     sorted_items = OrderedDict(sorted(count_scode.items()))
#     for key, value in sorted_items.items():
#         print(f"{key}: {value}")


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
        check = 1
        fsize = 0
        scode = []
        for line in stdin:
            print(line, end="")
            scode.append(int(line.split(" ")[7]))
            fsize += int(line.split(" ")[8])
            if check == 10:
                print_metrics(scode, fsize)
                scode = []
                check = 0
            check += 1
    except KeyboardInterrupt:
        print_metrics(scode, fsize)
        raise
    print_metrics(scode, fsize)
