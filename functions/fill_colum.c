/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_colum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:16:45 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/16 17:21:28 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

// fills colum
void	fill_colum(t_fdf *data)
{
	char	*line;
	char	*colum;
	int		fd;
	int		i;

	colum = ft_split(line, ' ');
	fd = open(data->map, O_RDONLY);
	line = get_next_line(fd);
	while (i < data->colums)
	{
		data->height[]
		i++;
	}
	free(line);
	close(fd);
}

