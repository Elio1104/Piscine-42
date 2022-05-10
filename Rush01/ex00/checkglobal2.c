/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkglobal2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:56:57 by alondot           #+#    #+#             */
/*   Updated: 2021/11/21 21:19:23 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
