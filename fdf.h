/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:38:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/11 12:14:34 by vfuhlenb         ###   ########.fr       */
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
}	t_fdf;

typedef struct s_point
{
	int		value;
	int		trgb;
}	t_point;

int		draw_line(void *mlx, void *win, int beginX, int beginY, int endX, int endY, int color);
int		count_lines(char *argv[]);
void	initialize_map(t_fdf data, char *argv[]);
void	fdf(t_fdf data, char *argv[]);

#endif