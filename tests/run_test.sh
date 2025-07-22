gcc -static -g run_test.c -lrt -lm ../libft.a -o a
if [ -f "a" ]; then
	./a
	rm a
else
	echo "No tests to run.\n"
fi
gcc -static -g run_test_itoa.c -lrt -lm ../libft.a -o itoa
if [ -f "itoa" ]; then
	./itoa
	rm itoa
else
	echo "No tests for ft_itoa.\n"
fi
