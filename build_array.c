/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:58:01 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/10 12:03:59 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

// returns lines
int	count_lines(char *argv[])
{
	char	*line;
	int		x;
	int		fd;

	fd = open(argv[1], O_RDONLY);
	x = 0;
	line = get_next_line(fd);
	while (line > 0)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		x++;
	}
	free(line);
	close(fd);
	return (x);
}
