/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:37:21 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/11 14:38:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	t_fdf	data;

	data.map = argv[1];
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, 640, 360, "FdF");
	data.colums = 0;
	data.lines = 0;
	fdf(data);
	mlx_loop(data.mlx);
	return (0);
}
