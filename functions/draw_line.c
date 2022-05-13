/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:52:09 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/13 17:39:47 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int	draw_line(t_fdf *data, int p1, int p2)
{
	t_draw	draw;

	draw.delta_x = p2 - p1;
	draw.delta_y = p2 - p1;
	draw.pixels = sqrt((draw.delta_x * draw.delta_x) \
	+ (draw.delta_y * draw.delta_y));
	draw.delta_x /= draw.pixels;
	draw.delta_y /= draw.pixels;
	draw.pixel_x = p1;
	draw.pixel_y = p1;
	while (draw.pixels)
	{
		mlx_pixel_put(data->mlx, data->win, draw.pixel_x, \
		draw.pixel_y, 0x00FF0000);
		draw.pixel_x += draw.delta_x;
		draw.pixel_y += draw.delta_y;
		--draw.pixels;
	}
	return (0);
}
