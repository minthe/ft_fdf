/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fills_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:26:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/16 18:18:25 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	fills_grid(t_fdf *data)
{
	int	y;
	int x;
	int fd;
	char **line;

	y = 0;
	x = 0;
	fd = open(data->map, O_RDONLY);
	line = ft_split(get_next_line(fd), ' ');
	while (y < data->lines)
	{
		data->height[y] = (int *) ft_calloc(sizeof(int), data->colums);
		if (data->height[y] == NULL)
			return ;
		while (x < data->colums)
		{
			data->height[y][x] = ft_atoi(line[x]);
			x++;
		}
		free(line);
		line = ft_split(get_next_line(fd), ' ');
		y++;
	}
	free(line);
	close(fd);
}