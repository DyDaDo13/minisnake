#ifndef MINISNAKE_H
# define MINISNAKE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
	char		**map;
	int			x;
	int			y;
	int			map_width;
	int			map_height;
}t_data;

int		ft_atoi(const char *nptr);
void	print_map(char **map);
char	**init_map(int x, int y);
void	print_map(char **map);
void	print_new_map(char **map);
void	free_map(char **map);

#endif