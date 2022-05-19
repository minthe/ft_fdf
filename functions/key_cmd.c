/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:18:43 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/19 21:11:26 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int	key_cmd(int key, t_fdf *data)
{
	if (key == XK_Escape)
		close_fdf(data);
	else if (key == XK_i)
		data->scale += 10;
	else if (key == XK_o)
		data->scale -= 10;
	else if (key == XK_w)
		data->offset_y -= 100;
	else if (key == XK_s)
		data->offset_y += 100;
	else if (key == XK_a)
		data->offset_x -= 100;
	else if (key == XK_d)
		data->offset_x += 100;
	else if (key == XK_plus)
		data->scale_h += 1;
	else if (key == XK_minus)
		data->scale_h -= 1;
	render_fdf(data);
	return (0);
}
