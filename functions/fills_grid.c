/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fills_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:26:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/19 14:48:19 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

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
			free(values[x]); // todo
			x++;
		}
		x = 0;
		free(line);
		free(values);
		line = get_next_line(fd);
		y++;
	}
	close(fd);
}