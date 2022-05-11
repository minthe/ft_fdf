/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:37:51 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/11 12:14:48 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	initialize_map(t_fdf data, char *argv[])
{
	printf("lines:%d\n", count_lines(argv));
	printf("lines:%p\n", data.win);
}
