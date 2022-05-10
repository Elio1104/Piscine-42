/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:50:05 by alondot           #+#    #+#             */
/*   Updated: 2021/11/21 21:27:42 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkglobal(int t[6][6]);

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
