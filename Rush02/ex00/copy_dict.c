/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_dic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:49:37 by alondot           #+#    #+#             */
/*   Updated: 2021/11/28 19:46:33 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

int	ligne_count(void)
{
	int		fd;
	char	*str;
	int		ligne;

	ligne = 0;
	fd = open("numbers.dict", O_RDONLY);
	str = malloc(sizeof(char) * 1);
	while (read(fd, str, 1))
	{
		if (str[0] == '\n')
			ligne++;
	}
	free(str);
	return (ligne);
}

char	*copy_dict(char *str, int ligne)
{
	int		fd;
	char	*tmp;

	ligne = 0;
	fd = open("numbers.dict", O_RDONLY);
	str = malloc(sizeof(char) * 2000);
	tmp = str;
	while (read(fd, str, 1))
	{
		if (str[0] == '\n')
			ligne++;
		str++;
	}
	*str = '\0';
	str = tmp;
	return (str);
}
