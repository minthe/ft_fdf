/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:37:51 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/14 19:06:50 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

// parses data into struct and validates if map is rectangular
void	initialize_map(t_fdf *data)
{
	int	x;

	data->mlx = mlx_init();
	data->img = mlx_new_image(data->mlx, 500, 500);
	data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel, &data->line_length, &data->endian);
	data->lines = count_lines(data->map);
	data->colums = count_colums(data->map);
	data->height = (int **) ft_calloc(sizeof(int *), data->lines);
	if (data->height == NULL)
		return ;
	x = 0;
	while (x < data->lines)
	{
		data->height[x] = (int *) ft_calloc(sizeof(int), data->colums);
		if (data->height[x] == NULL)
			return ;
		x++;
	}
}
