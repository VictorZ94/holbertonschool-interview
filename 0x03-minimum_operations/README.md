# Minimum Operations

![](https://img.shields.io/badge/linear%20time-O(n)-orange)
![](https://img.shields.io/badge/Python3-Developer-blue)

### Task 
In a text file, there is a single character <p style='color:red'>H</p>. Your text editor can execute only two operations in this file: `Copy All` and `Paste`. Given a number `n`, write a method that calculates the fewest number of operations needed to result in exactly n H characters in the file.

Example:

n = 9
H => Copy All => Paste => HH => Paste =>HHH => Copy All => Paste => HHHHHH => Paste => HHHHHHHHH
Number of operations: 6

n = 12
H => Copy All => Paste => HH => Paste =>HHH => Copy All => Paste => HHHHHH => Paste => HHHHHHHHH Paste => HHHHHHHHHHHH
Number of operations: 7

n = 4
H => Copy All => Paste => HH => Copy All => Paste => HHHH
Number of operations: 4

n = 15
H => Copy All => Paste => HH => Paste => HHH => Paste =>HHHH => Paste => HHHHH => Copy All => Paste => HHHHHHHHHH => Paste => HHHHHHHHHHHHHHH
Number of operations: 8

```Bash
victorz94@DESKTOP-1U2AUK9:~/0x03-minimum_operations$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

minOperations = __import__('0-minoperations').minOperations

n = 4
print("Min # of operations to reach {} char: {}".format(n, minOperations(n)))

n = 12
print("Min # of operations to reach {} char: {}".format(n, minOperations(n)))

n = 9
print("Min # of operations to reach {} char: {}".format(n, minOperations(n)))

n = 15
print("Min # of operations to reach {} char: {}".format(n, minOperations(n)))

n = 35
print("Min # of operations to reach {} char: {}".format(n, minOperations(n)))
victorz94@DESKTOP-1U2AUK9:~/0x03-minimum_operations$ ./0-main.py
Min # of operations to reach 4 char: 4
Min # of operations to reach 12 char: 7
Min # of operations to reach 9 char: 6
Min # of operations to reach 15 char: 8
Min # of operations to reach 35 char: 12
victorz94@DESKTOP-1U2AUK9:~/0x03-minimum_operations$

```

> Holberton School - Specialization Full-Stack Web Developer
