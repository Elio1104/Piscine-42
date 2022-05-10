/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:48:27 by hdeclerc          #+#    #+#             */
/*   Updated: 2021/11/28 17:09:44 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

int	ft_tcheck_input(int nb_arg, char **arg)
{
	int	z;

	z = 0;
	if (nb_arg == 3)
		return (0);
	else if (nb_arg <= 1)
		return (0);
	else if (nb_arg == 2)
	{
		while (arg[1][z])
		{
			if (arg[1][z] >= '0' && arg[1][z] <= '9')
				z++;
			else
				return (0);
		}
	}
	return (1);
}
