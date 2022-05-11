/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_colums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:28:50 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/11 15:33:25 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

// returns colums
int	count_colums(char *map)
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
