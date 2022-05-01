/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:37:21 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/01 11:59:56 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int draw_line(void *mlx, void *win, int beginX, int beginY, int endX, int endY, int color)
{
	double deltaX = endX - beginX; // 10
	double deltaY = endY - beginY; // 0
	int pixels = sqrt((deltaX * deltaX) + (deltaY * deltaY));
	deltaX /= pixels; // 1
	deltaY /= pixels; // 0

	double pixelX = beginX;
	double pixelY = beginY;
	while (pixels)
	{
		mlx_pixel_put(mlx, win, pixelX, pixelY, color);
		pixelX += deltaX;
		pixelY += deltaY;
		--pixels;
	}
	return (0);
}

static int	mouse_hook(int keycode, int x, int y, t_fdf *data)
{
	int	i;

	i = 1;
	printf("Keycode %d\n", keycode);
	if (keycode == 1)
		mlx_pixel_put(data->mlx, data->win, x, y, 0xFFFFFF);
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*line;
	(void)argc;
	int fd = open(argv[1], O_RDONLY);
	t_fdf	data;

	while ((line = get_next_line(fd)) > 0)
	{
		printf("%s", line);
		free(line);
	}
	printf("%s\n", line);
	close(fd);
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, 640, 360, "Tutorial Window - Draw Pixel");
	mlx_mouse_hook(data.win, mouse_hook, &data);
	draw_line(data.mlx, data.win, 640, 360, 0, 0, 0xFFFFFF);
	mlx_loop(data.mlx);
	return (0);
}
