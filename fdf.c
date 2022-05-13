/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:05:23 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/13 22:22:02 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

// handles the map and interactions with mlx
void	fdf(t_fdf *data)
{
	data->lines = 15; // debugging
	printf("fdf.c\n");
	draw_line(data, 255, 50); // debugging
}
