/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:37:21 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/23 18:32:25 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	mouse_hook(int keycode, int x, int y, t_fdf *data)
{
	printf("Keycode %d\n", keycode);
	if (keycode == 1 || keycode == 3)
	{
		mlx_pixel_put(data->mlx, data->win, x, y, 0xFFFFFF);
	}
	
	return (0);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	int fd = open(argv[1], O_RDONLY);
	t_fdf	data;

	while (get_next_line(fd))
		printf("%s\n", get_next_line(fd));
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, 640, 360, "Tutorial Window - Draw Pixel");
	mlx_mouse_hook(data.win, mouse_hook, &data);
	mlx_loop(data.mlx);
	return (0);
}
