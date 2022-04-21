/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:37:21 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/21 19:19:07 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	key_hook(int keycode, t_vars *vars)
{
	(void)vars;
	(void)keycode;
	printf("Hello from key_hook!\n");
	return (0);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	t_vars	vars;
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.win, 640, 360, "Tutorial Window");

	mlx_key_hook(vars.win, key_hook, &vars.win);

	mlx_loop(vars.mlx);
	return (0);
}
