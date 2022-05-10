/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:22:32 by alondot           #+#    #+#             */
/*   Updated: 2021/12/01 08:40:05 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	len = max - min;
	*range = (int *)malloc(sizeof(int) * len);
	while (min < max)
		range[0][i++] = min++;
	return (len);
}
