/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:38:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/11 14:33:32 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <unistd.h>
# include "./minilibx-linux/mlx.h"
# include <stdio.h>
# include <math.h>
# include "./gnl/get_next_line.h"

typedef struct s_fdf
{
	void	*mlx;
	void	*win;
	int		colums;
	int		lines;
	char	*map;
}	t_fdf;

typedef struct s_point
{
	int		value;
	int		trgb;
	int		x;
	int		y;
}	t_point;

int		draw_line(t_fdf data, t_point p1, t_point p2);
int		count_lines(char *map);
void	initialize_map(t_fdf data);
void	fdf(t_fdf data);

#endif