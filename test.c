#include "libft.h"
#include <stdio.h>

int main()
{
	char **s = ft_split("", 97);

	printf("%p\n", s);
	printf("%p\n", s[0]);
	free(s[0]);
	free(s);
}
