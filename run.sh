#!/bin/bash

# This script is used to test solutions

if [ $# -eq "0" ]
then
	echo "error: Missing argument"
	exit 0
else
	input="$1"
	output="${input%.c}.out"

	gcc $input -o $output -lm
	./$output
	rm $output
fi