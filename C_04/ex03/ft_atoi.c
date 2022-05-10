/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 08:53:53 by alondot           #+#    #+#             */
/*   Updated: 2021/11/22 09:27:06 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow_rec(int i, int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (i);
	return (i * ft_pow_rec(i, n - 1));
}

int ft_atoi(char *str)
{
	int			neg;
	long long	res;
	int			i;

	res = 0;
	i = 0;
	neg = 1;
	while (*str <= 32)
		str++;
	while (*str && ((*str == '-' || *str == '+')))
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str && ((*str >= '0' && *str <= '9')))
		str++;
	str--;
	while ((*str >= '0' && *str <= '9'))
		res += ((*str--) - '0') * ft_pow_rec(10, i++);
	return ((int)(res * neg));
}
