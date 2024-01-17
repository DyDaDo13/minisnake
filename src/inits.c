#include "../inc/minisnake.h"

char	**init_map(int x, int y)
{
	char	**map;
	int		i = -1;
	int		j;

	map = malloc(sizeof(char *) * (y + 1));
	map[y] = NULL;
	while (++i < y)
	{
		map[i] = malloc(sizeof(char) * x + 1);
		map[i][x] = '\0';
	}
	i = 0;
	j = -1;
	while (++j < x)
		map[i][j] = '1';
	j = -1;
	while (++i < y - 1)
	{
		j = -1;
		map[i][++j] = '1';
		while (++j < (x - 1))
		{
			if (i == (y / 2) && j == (x / 2))
				map[i][j] = 'H';
			else
				map[i][j] = '0';
		}
		map[i][j] = '1'; 
	}
	j = -1;
	while (++j < x)
		map[i][j] = '1';
	return (map);
}
