/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fills_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:26:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/20 19:51:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void static	handle_values(t_fdf *data, char **values, int *y)
{
	int	x;

	x = 0;
	while (x < data->colums)
	{
		if (!values[x])
		{
			free_array(values);
			error_msg(data, "Invalid map");
		}
		else if (ft_atoi(values[x]) < -999 || ft_atoi(values[x]) > 999)
		{
			free_array(values);
			error_msg(data, "Map height exceeds limit of +-999px");
		}
		data->height[*y][x] = ft_atoi(values[x]);
		x++;
	}
}

void	fills_grid(t_fdf *data)
{
	int		y;
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
		handle_values(data, values, &y);
		line = get_next_line(fd);
		y++;
		free_array(values);
	}
	close(fd);
}
