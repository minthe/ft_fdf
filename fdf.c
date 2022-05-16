/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:05:23 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/16 15:22:33 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

// handles the map and interactions with mlx
void	fdf(t_fdf *data)
{
	t_point	p1;
	t_point	p2;

	p1.x = 15;
	p1.y = 20;
	p2.x = 300;
	p2.y = 150;
	draw_line(data, &p2, &p1);
	my_mlx_pixel_put(data, 5, 5, 0x00FF0000);
	mlx_put_image_to_window(data->mlx, data->win, data->image->img, 0, 0);
}
