/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fills_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:26:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/19 16:02:07 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static void	free_values(char *line, char **values, int x)
{
	free(line);
	while (x > 0)
	{
		free(values[x - 1]);
		x--;
	}
	free(values);
}

void	fills_grid(t_fdf *data)
{
	int	y;
	int x;
	int fd;
	char *line;
	char **values;

	y = 0;
	x = 0;
	fd = open(data->map, O_RDONLY);
	line = get_next_line(fd);
	while (y < data->lines && line)
	{
		data->height[y] = (int *) ft_calloc(sizeof(int), data->colums);
		if (data->height[y] == NULL)
			return ;
		values = ft_split(line, ' ');
		while (x < data->colums)
		{
			data->height[y][x] = ft_atoi(values[x]);
			x++;
		}
		x = 0;
		line = get_next_line(fd);
		y++;
	}
	close(fd);
	free_values(line, values, data->lines);
}
