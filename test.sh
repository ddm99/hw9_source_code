#!/bin/bash

make

echo "********************************************"
echo "Results from the tests"
echo "********************************************"

count=50
for i in $(seq $count); do
    ./func | ./test
done
