/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:38:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/12 18:25:51 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <unistd.h>
# include "./minilibx-linux/mlx.h"
# include <stdio.h>
# include <math.h>
# include "./gnl/get_next_line.h"

typedef struct s_point
{
	int		value;
	int		trgb;
	int		x;
	int		y;
}	t_point;

typedef struct s_fdf
{
	void	*mlx;
	void	*win;
	int		colums;
	int		lines;
	char	*map;
	int		**height;
	char	**color;
	struct	s_point point;
}	t_fdf;

int		draw_line(t_fdf *data, t_point *p1, t_point *p2);
int		count_lines(char *map);
int		count_colums(char *map);
void	initialize_map(t_fdf *data);
void	fdf(t_fdf *data);

#endif