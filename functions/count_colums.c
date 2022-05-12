/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_colums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:28:50 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/12 18:26:09 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

// returns colums
int	count_colums(char *map)
{
	char	*line;
	int		x;
	int		i;
	int		fd;

	fd = open(map, O_RDONLY);
	i = 0;
	x = 0;
	line = get_next_line(fd);
	while (line[i] != '\n')
	{
		if (line[i] == ' ')
			x++;
		i++;
	}
	free(line);
	close(fd);
	return (x);
}
