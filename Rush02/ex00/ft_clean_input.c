/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:49:53 by hdeclerc          #+#    #+#             */
/*   Updated: 2021/11/28 17:13:16 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

char	*ft_clean_input(char *str, int size)
{
	int		y;
	int		p;
	int		v;
	int		i;
	char	*tab2;

	y = size;
	p = size - 1;
	while (y % 3 != 0)
		y++;
	v = (p + (y - size));
	i = -1;
	tab2 = malloc(sizeof(char) * y + 1);
	*tab2 = 0;
	while (i++ < (y - size))
		tab2[i] = '0';
	i = y;
	while (p != -1)
	{
		tab2[v] = str[p];
		p--;
		v--;
	}
	tab2[i] = '\0';
	return (tab2);
}
