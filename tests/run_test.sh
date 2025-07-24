#!/bin/bash
gcc -static -g run_test.c -lrt -lm ../libft.a -o a

if [[ $1 == "1" ]]; then
	echo "***	Testing with bonus	***"
	if [[ -f "a" ]]; then
		./a "1"
		rm a
	else
		echo "No tests to run.\n"
	fi
else
	if [[ -f "a" ]]; then
		./a
		rm a
	else
		echo "No tests to run.\n"
	fi
fi
