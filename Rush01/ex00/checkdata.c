/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkdata.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:50:23 by alondot           #+#    #+#             */
/*   Updated: 2021/11/21 20:59:38 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkdata(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (*str)
	{
		if (*str == ' ' && i == 1)
			i = 0;
		else if (*str <= '4' && *str >= '1' && i == 0)
		{
			i = 1;
			j++;
		}
		else
			return (0);
		str++;
	}
	if (j == 16)
		return (1);
	return (0);
}

int	init(int tab[6][6], char *str)
{
	if (checkdata(str) == 0)
		return (0);
	tab[1][0] = str[0];
	tab[2][0] = str[2];
	tab[3][0] = str[4];
	tab[4][0] = str[6];
	tab[1][5] = str[8];
	tab[2][5] = str[10];
	tab[3][5] = str[12];
	tab[4][5] = str[14];
	tab[0][1] = str[16];
	tab[0][2] = str[18];
	tab[0][3] = str[20];
	tab[0][4] = str[22];
	tab[5][1] = str[24];
	tab[5][2] = str[26];
	tab[5][3] = str[28];
	tab[5][4] = str[30];
	return (1);
}
