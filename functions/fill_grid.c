/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:26:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/16 17:41:10 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static int	fill_colum(t_fdf *data, int x, char *line)
{
	char	*line;
	char	*colum;
	int		fd;
	int		i;
	int		value;

	colum = ft_split(line, ' ');

	while (i < data->colums)
	{
		data->height[]
		i++;
	}
	return (value);
}

void	fills_grid(t_fdf *data)
{
	int	y;
	int x;
	int fd;
	char *line;

	y = 0;
	x = 0;
	fd = open(data->map, O_RDONLY);
	line = get_next_line(fd);
	while (y < data->lines)
	{
		data->height[y] = (int *) ft_calloc(sizeof(int), data->colums);
		if (data->height[y] == NULL)
			return ;
		while (x < data->colums)
		{
			data->height[y][x] = fill_colum(data, x, line);
			x++;
		}
		free(line);
		close(fd);
		y++;
	}
}