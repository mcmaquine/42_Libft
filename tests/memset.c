#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("String %s\n", argv[1]);
		ft_memset(argv[1], argv[2][0], ft_strlen(argv[1]));
		printf("After memset: %s", argv[1]);
	}
}