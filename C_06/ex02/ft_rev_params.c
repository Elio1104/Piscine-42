/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 09:40:55 by alondot           #+#    #+#             */
/*   Updated: 2021/11/20 09:44:48 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc;
	while (--i > 0)
	{
		while (*argv[i])
		{
			putchar(*argv[i]);
			argv[i]++;
		}
		putchar('\n');
	}
}
