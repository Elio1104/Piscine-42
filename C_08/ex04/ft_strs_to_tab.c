/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:49:58 by alondot           #+#    #+#             */
/*   Updated: 2021/12/01 08:57:56 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	i = -1;
	while (src[++i])
		size++;
	new = malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
		new[i] = src[i];
	new[i] = '\0';
	return (new);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*pointeur;
	int			i;

	pointeur = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(pointeur))
		return (0);
	i = 0;
	while (i < ac)
	{
		pointeur[i].size = ft_strlen(av[i]);
		pointeur[i].str = av[i];
		pointeur[i].copy = ft_strdup(av[i]);
		i++;
	}
	pointeur[i].str = 0;
	return (pointeur);
}
