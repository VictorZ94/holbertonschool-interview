import os
import sys

stream  = os.popen(f'echo "scale=0; {sys.argv[1]}* {sys.argv[2]}" | bc')
stream1  = os.popen(f'./mul {sys.argv[1]} {sys.argv[2]}')

output = "".join(stream.read().split("\\\n"))
output1 = stream1.read()

print(output == output1)
