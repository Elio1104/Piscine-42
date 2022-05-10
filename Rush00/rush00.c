/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:34:27 by alondot           #+#    #+#             */
/*   Updated: 2021/11/13 11:59:30 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1 , &c, 1);
}

void ligne(int x)
{
	int i;

	i = 0;
	ft_putchar('A');
	if (x > 2)
	{
		while (i < (x-2))
		{
			ft_putchar('B');
			i++;
		}
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}


void	centre(int x)
{
	int	i;

	i = 0;
	ft_putchar('B');
	if (x > 2)
	{
		while (i < (x-2))
		{
			ft_putchar(' ');
			i++;
		}
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
}

void rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
	{
		ligne(x);
		ft_putchar('\n');
		if (y > 2)
		{
			while (i < (y-2))
			{
				centre(x);
				ft_putchar('\n');
				i++;
			}
		}
		if (y > 1)
		{
			ligne(x);
			ft_putchar('\n');
		}
	}
}

int	main(void)
{
	rush(0, 5);
	rush(5, 4);
	rush(-3, 7);
	return (0);
}
