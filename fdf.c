/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:05:23 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/16 12:43:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

// handles the map and interactions with mlx
void	fdf(t_fdf *data)
{
	draw_line(data, 490, 155);
	my_mlx_pixel_put(data, 5, 5, 0x00FF0000);
	mlx_put_image_to_window(data->mlx, data->win, data->image->img, 0, 0);
}
