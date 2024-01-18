#include "../inc/minisnake.h"

// void	game(t_data *data)
// {

// }

int	main(int ac, char **av)
{
	t_data	data;
	if (ac == 3 && ft_atoi(av[1]) <= 200 && ft_atoi(av[2]) <= 200)
	{
		//printf("test\n");
		data.map = init_map(ft_atoi(av[1]), ft_atoi(av[2]));
		//print_map(data.map);
		//game(&data);
		print_new_map(data.map);
		free_map(data.map);
	}
	return (0);
}