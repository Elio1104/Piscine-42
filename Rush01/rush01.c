/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:36:54 by alondot           #+#    #+#             */
/*   Updated: 2021/11/21 20:28:52 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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

void	putchar(char c)
{
	write (1, &c, 1);
}

void	display(int tab[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			putchar(tab[j][i]);
			putchar(' ');
			j++;
		}
		putchar('\n');
		i++;
	}
}

void	valeur0(int tab[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			tab[i][j] = '0';
			j++;
		}
		i++;
	}
}

int	check_row(int t[6][6])
{
	int	i;
	int	j;
	int	k;

	k = 0;
	while (++k <= 4)
	{
		i = 0;
		while (++i <= 4)
		{
			j = i;
			while (++j <= 4)
			{
				if (t[i][k] == t[j][k])
					return (0);
			}
		}
	}
	return (1);
}

int	check_col(int t[6][6])
{
	int	i;
	int	j;
	int	k;

	k = 0;
	while (++k <= 4)
	{
		i = 0;
		while (++i <= 4)
		{
			j = i;
			while (++j <= 4)
			{
				if (t[k][i] == t[k][j])
					return (0);
			}
		}
	}
	return (1);
}

int	check_left_row(int t[6][6])
{
	int		i;
	int		j;
	int		tmp;
	char	incr;

	j = 0;
	while (++j <= 4)
	{
		i = 1;
		incr = '1';
		tmp = t[i][j];
		while (++i <= 4)
		{
			if (t[i][j] > tmp)
			{
				tmp = t[i][j];
				incr++;
			}
		}
		if (t[0][j] != incr)
			return (0);
	}
	return (1);
}

int	check_right_row(int t[6][6])
{
	int		i;
	int		j;
	int		tmp;
	char	incr;

	j = 0;
	while (++j <= 4)
	{
		i = 4;
		incr = '1';
		tmp = t[i][j];
		while (--i >= 1)
		{
			if (t[i][j] > tmp)
			{
				tmp = t[i][j];
				incr++;
			}
		}
		if (t[5][j] != incr)
			return (0);
	}
	return (1);
}

int	check_up_col(int t[6][6])
{
	int		i;
	int		j;
	int		tmp;
	char	incr;

	i = 0;
	while (++i <= 4)
	{
		j = 1;
		incr = '1';
		tmp = t[i][j];
		while (++j <= 4)
		{
			if (t[i][j] > tmp)
			{
				tmp = t[i][j];
				incr++;
			}
		}
		if (t[i][0] != incr)
			return (0);
	}
	return (1);
}

int	check_down_col(int t[6][6])
{
	int		i;
	int		j;
	int		tmp;
	char	incr;

	i = 0;
	while (++i <= 4)
	{
		j = 4;
		incr = '1';
		tmp = t[i][j];
		while (--j >= 1)
		{
			if (t[i][j] > tmp)
			{
				tmp = t[i][j];
				incr++;
			}
		}
		if (t[i][5] != incr)
			return (0);
	}
	return (1);
}

int	checkglobal(int t[6][6])
{
	if (!check_row(t) || !check_col(t))
		return (0);
	if (check_left_row(t))
		if (check_right_row(t))
			if (check_up_col(t))
				if (check_down_col(t))
					return (1);
	return (0);
}

int	recursive(int t[6][6], int i, int j)
{
	char	x;

	x = '0';
	if (i == 5)
	{
		i = 1;
		j += 1;
	}
	if (j == 5)
		return (0);
	while (++x <= '4')
	{
		if (checkglobal(t))
			return (1);
		t[i][j] = x;
		if (!(i == 4 && j == 4))
			if (recursive(t, i + 1, j))
				return (1);
	}
	return (0);
}

int	game(int t[6][6])
{
	int	x;

	x = recursive(t, 1, 1);
	return (x);
}

int	main(int argc, char *argv[])
{
	int	t[6][6];
	int	x;

	if (argc != 2)
		return (0);
	valeur0(t);
	x = init(t, argv[1]);
	if (x == 0)
		return (0);
	x = game(t);
	if (x)
		display(t);
	else
		write(1, "Error\n", 6);
	return (0);
}
