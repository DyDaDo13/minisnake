#include "../inc/minisnake.h"

void	print_new_map(char **map)
{
	int	y = -1;
	int	x;

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

int	main(int ac, char **av)
{
	t_data	data;
	if (ac == 3)
	{
		data.map = init_map(ft_atoi(av[1]), ft_atoi(av[2]));
		//print_map(data.map);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		print_new_map(data.map);
		//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		//printf("\n\n\n\n\n\n\n\n");
	}
	return (0);
}