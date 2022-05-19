/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:58:01 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/12 18:25:49 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

// returns lines
int	count_lines(char *map)
{
	char	*line;
	int		x;
	int		fd;

	fd = open(map, O_RDONLY);
	x = 0;
	line = get_next_line(fd);
	while (line > 0)
	{
		free(line);
		line = get_next_line(fd);
		x++;
	}
	free(line);
	close(fd);
	return (x);
}
