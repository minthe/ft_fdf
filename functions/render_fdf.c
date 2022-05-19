/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_fdf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:18:14 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/19 21:13:47 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void static	render_y(t_fdf *data)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < data->lines)
	{
		while (x < data->colums && (y < (data->lines - 1)))
		{
			data->p1.x = x * data->scale + data->offset_x;
			data->p1.y = y * data->scale + data->offset_y;
			data->p1.z = data->height[y][x] * data->scale_h;
			data->p2.x = x * data->scale + data->offset_x;
			data->p2.y = (y + 1) * data->scale + data->offset_y;
			data->p2.z = data->height[y + 1][x] * data->scale_h;
			isometric(&data->p1.x, &data->p1.y, data->p1.z);
			isometric(&data->p2.x, &data->p2.y, data->p2.z);
			draw_line(data, &data->p2, &data->p1);
			x++;
		}
		x = 0;
		y++;
	}
}

void static	render_x(t_fdf *data)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < data->lines)
	{
		while (x < data->colums && (x < (data->colums - 1)))
		{
			data->p1.x = x * data->scale + data->offset_x;
			data->p1.y = y * data->scale + data->offset_y;
			data->p1.z = data->height[y][x] * data->scale_h;
			data->p2.x = (x + 1) * data->scale + data->offset_x;
			data->p2.y = y * data->scale + data->offset_y;
			data->p2.z = data->height[y][x + 1] * data->scale_h;
			isometric(&data->p1.x, &data->p1.y, data->p1.z);
			isometric(&data->p2.x, &data->p2.y, data->p2.z);
			draw_line(data, &data->p2, &data->p1);
			x++;
		}
		x = 0;
		y++;
	}
}

void	render_fdf(t_fdf *data)
{
	ft_bzero(data->image->addr, data->win_size_x * \
	data->win_size_y * (data->image->bits_per_pixel / 8));
	render_x(data);
	render_y(data);
	mlx_put_image_to_window(data->mlx, data->win, data->image->img, 0, 0);
}
