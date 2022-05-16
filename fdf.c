/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:05:23 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/16 20:11:08 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

// handles the map and interactions with mlx
void	fdf(t_fdf *data)
{
	t_point	p1;
	t_point	p2;
	int x;
	int y;
	int scale;

	scale = 15;
	x = 0;
	y = 0;
	while(y < data->lines)
	{
		while(x < data->colums)
		{
			if (y < (data->lines - 1))
			{
				p1.x = x * scale;
				p1.y = y * scale;
				p2.x = x * scale;
				p2.y = (y + 1) * scale;
				draw_line(data, &p2, &p1);
			}
			if (x < (data->colums - 1))
			{
				p1.x = x * scale;
				p1.y = y * scale;
				p2.x = (x + 1) * scale;
				p2.y = y * scale;
				draw_line(data, &p2, &p1);
			}
			x++;
		}
		x = 0;
		y++;
	}
	my_mlx_pixel_put(data, 5, 5, 0x00FF0000);
	mlx_put_image_to_window(data->mlx, data->win, data->image->img, 0, 0);
}
