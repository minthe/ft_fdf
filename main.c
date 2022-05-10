/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:37:21 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/10 18:34:32 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	t_fdf	data;

	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, 640, 360, "FdF");
	printf("lines:%d\n", count_lines(argv));
	mlx_loop(data.mlx);
	return (0);
}
