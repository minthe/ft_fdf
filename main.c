/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:37:21 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/16 20:32:33 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

// (for debbuging) -> Prints the Input-Map
// static void	print_lines(char *map)
// {
// 	char	*line;
// 	int		x;
// 	int		fd;

// 	fd = open(map, O_RDONLY);
// 	x = 0;
// 	line = get_next_line(fd);
// 	while (line > 0)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 		x++;
// 	}
// 	free(line);
// 	close(fd);
// }

static void	print_values(t_fdf data)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while(y < data.lines)
	{
		while(x < data.colums)
		{
			if (data.height[y][x] > 9)
				printf("%d ", data.height[y][x]);
			else
				printf("%d  ", data.height[y][x]);
			x++;
		}
		printf("\n");
		x = 0;
		y++;
	}
}

int	main(int argc, char *argv[])
{
	t_fdf	data;

	if (argc != 2)
		return (0);
	data.map = argv[1];
	initialize_map(&data);
	fdf(&data);
//	print_lines(data.map); // debugging
	print_values(data);
	mlx_loop(data.mlx);
	return (0);
}
