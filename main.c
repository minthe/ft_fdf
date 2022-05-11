/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:37:21 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/11 19:48:05 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	print_lines(char *map)
{
	char	*line;
	int		x;
	int		fd;

	fd = open(map, O_RDONLY);
	x = 0;
	line = get_next_line(fd);
	while (line > 0)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		x++;
	}
	free(line);
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	t_fdf	data;

	data.map = argv[1];
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, 640, 360, "FdF");
	data.lines = count_lines(data.map);
	data.colums = count_colums(data.map);
	printf("lines before: %d\n", data.lines); // debugging
	fdf(&data);
	print_lines(data.map); // debugging
	printf("lines after: %d\n", data.lines); // debugging
	mlx_loop(data.mlx);
	return (0);
}
