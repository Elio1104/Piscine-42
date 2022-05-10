/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkglobal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:51:54 by alondot           #+#    #+#             */
/*   Updated: 2021/11/21 21:04:58 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left_row(int t[6][6]);
int	check_right_row(int t[6][6]);
int	check_up_col(int t[6][6]);
int	check_down_col(int t[6][6]);

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

int	checkglobal(int t[6][6])
{
	if (!(check_row(t) && check_col(t)))
		return (0);
	if (check_left_row(t))
		if (check_right_row(t))
			if (check_up_col(t))
				if (check_down_col(t))
					return (1);
	return (0);
}
