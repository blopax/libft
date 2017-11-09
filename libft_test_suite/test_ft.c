#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int len;

	if (argc == 3)
	{
		printf("FT_STRCPY\n");
		printf("Src avant = %s et dst avant = %s \n", argv[1], argv[2]);
		
		printf("Src apres = %s et dst apres = %s", argv[1], ft_strcpy(argv[2], argv[1]));
		printf("\n\n");
	}

		if (argc == 4)
		{
			printf("FT_STRNCPY\n");
			len = argv[3][0] - 48;
			printf("Src avant = %s, dst avant = %s et len = %d \n", argv[1], argv[2], len);
		
			printf("Src apres = %s et dst apres = %s", argv[1], ft_strncpy(argv[2], argv[1], len));
			printf("\n\n");
		}

	return (0);
}
