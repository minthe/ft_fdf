/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:38:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/14 18:57:15 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <unistd.h>
# include "./minilibx-linux/mlx.h"
# include <stdio.h>
# include <math.h>
# include "./gnl/get_next_line.h"
# include "./libft/libft.h"

typedef struct s_draw
{
	double	delta_x;
	double	delta_y;
	int		pixels;
	double	pixel_x;
	double	pixel_y;
}	t_draw;

typedef struct s_fdf
{
	void	*mlx;
	void	*win;
	int		colums;
	int		lines;
	char	*map;
	int		**height;
	int		**color;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	
}	t_fdf;

int		draw_line(t_fdf *data, int p1, int p2);
int		count_lines(char *map);
int		count_colums(char *map);
void	initialize_map(t_fdf *data);
void	fdf(t_fdf *data);
void	my_mlx_pixel_put(t_fdf *data, int x, int y, int color);

#endif