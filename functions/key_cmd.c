/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:18:43 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/19 16:37:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int	key_cmd(int key, t_fdf *data)
{
	if (key == XK_Escape)
		close_fdf(data);
	else if (key == XK_plus)
		data->scale += 10;
	else if (key == XK_minus)
		data->scale -= 10;
	return (0);
}
