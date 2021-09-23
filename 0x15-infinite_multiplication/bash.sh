#!/usr/bin/env bash
bc=$(echo "scale=0; $1 * $2" | bc)
program=$(./mul $1 $2)
echo "==== Start test ===="
if [ $bc == $program ]
then
    echo "True"
else
    echo "False"
fi
