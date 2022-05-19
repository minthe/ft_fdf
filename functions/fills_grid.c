/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fills_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:26:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/19 19:42:30 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	fills_grid(t_fdf *data)
{
	int		y;
	int		x;
	int		fd;
	char	*line;
	char	**values;

	y = 0;
	fd = open(data->map, O_RDONLY);
	line = get_next_line(fd);
	while (y < data->lines && line)
	{
		data->height[y] = (int *) ft_calloc(sizeof(int), data->colums);
		values = ft_split(line, ' ');
		free(line);
		x = 0;
		while (x < data->colums)
		{
			if (!values[x])
			{
				error_msg("Invalid Map");
				free_array(values);
				close_fdf(data);
			}
			data->height[y][x] = ft_atoi(values[x]);
			x++;
		}
		line = get_next_line(fd);
		y++;
		free_array(values);
	}
	close(fd);
}
