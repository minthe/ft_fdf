/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:54:06 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/05/17 17:56:26 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int	ft_abs(int n)
{
	if (n > -1)
		return (n);
	else
		return (-n);
}

void	exit_perror(char *c)
{
	perror(c);
	exit(EXIT_FAILURE);
}
