/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:37:51 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/21 16:43:01 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fdf(void)
{
	void	*mlx = mlx_init();
	void	*win = mlx_new_window(mlx, 640, 360, "Tutorial Window");
	mlx_loop(mlx);
	return ();
}
