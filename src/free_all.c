#include "../inc/minisnake.h"

void	free_map(char **map)
{
	int	i = -1;
	while (map[++i])
		free(map[i]);
	free(map);
}