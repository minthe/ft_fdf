/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:37:51 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/13 13:23:40 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

// parses data into struct and validates if map is rectangular
void	initialize_map(t_fdf *data)
{
	int	x;

	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, 640, 360, "FdF");
	printf("colums: %d\n", count_colums(data->map));
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
