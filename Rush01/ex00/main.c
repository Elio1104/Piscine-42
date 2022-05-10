/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:49:47 by alondot           #+#    #+#             */
/*   Updated: 2021/11/21 21:33:11 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	valeur0(int tab[6][6]);
int		init(int tab[6][6], char *str);
int		game(int t[6][6]);
void	display(int tab[6][6]);

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
