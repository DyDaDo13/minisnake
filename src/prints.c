#include "../inc/minisnake.h"

void	print_map(char **map)
{
	int		i = -1;
	while (map[++i])
		printf("%s\n", map[i]);
}

void	print_new_map(char **map)
{
	int	y = -1;
	int	x;

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	while (map[++y])
	{
		x = -1;
		while (map[y][++x])
		{
			if (map[y][x] == '1')
				printf("\033[0m██\033[0m");
			else if (map[y][x] == '0')
				printf("\033[30m██\033[0m");
			else if (map[y][x] == 'H')
				printf("\033[32m██\033[0m");
			// if (map[y][x] == '1')
			// 	printf("");
			// if (map[y][x] == '1')
			// 	printf("");
		}
		printf("\n");
	}
}
