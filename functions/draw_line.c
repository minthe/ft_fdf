/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:52:09 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/11 19:51:45 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int draw_line(t_fdf *data, t_point *p1, t_point *p2)
{
	double deltaX = p2->x - p1->x; // 10
	double deltaY = p2->y - p1->y; // 0
	int pixels = sqrt((deltaX * deltaX) + (deltaY * deltaY));
	deltaX /= pixels; // 1
	deltaY /= pixels; // 0

	double pixelX = p1->x;
	double pixelY = p1->y;
	while (pixels)
	{
		mlx_pixel_put(data->mlx, data->win, pixelX, pixelY, p1->trgb);
		pixelX += deltaX;
		pixelY += deltaY;
		--pixels;
	}
	return (0);
}
