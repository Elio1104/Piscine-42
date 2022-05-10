/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_last_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asibille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:14:22 by asibille          #+#    #+#             */
/*   Updated: 2021/11/28 17:07:37 by asibille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

int	find_last_number(char *array, int size)
{		 
	int	last_number;
    last_number	= array[size - 1];
	while (last_number == '0')
	{
		--size;
		last_number = array[size - 1];
	}
	return (size - 1); 
}
