/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_fdf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:10:14 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/19 16:58:19 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int	close_fdf(t_fdf *data)
{
	mlx_destroy_image(data->mlx, data->image->img);
	mlx_destroy_window(data->mlx, data->win);
	mlx_destroy_display(data->mlx);
	free(data->mlx);
	free(data->image);
	while (data->lines > 0)
	{
		free(data->height[data->lines - 1]);
		while(data->colums > 0)
		{
			free(&data->height[data->colums - 1]);
			data->colums--;
		}
		data->lines--;
	}
	free(data->map);
	free(data->height);
	exit(0);
	return (0);
}
