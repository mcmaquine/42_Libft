gcc -static -g run_test.c ../libft.a -o a
if [ -f "a" ]; then
	./a
else
	echo "No tests to run.\n"
fi
