gcc -static -g run_test.c -lrt -lm ../libft.a -o a
if [ -f "a" ]; then
	./a
	rm a
else
	echo "No tests to run.\n"
fi
