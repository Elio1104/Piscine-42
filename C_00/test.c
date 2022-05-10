/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:38:22 by alondot           #+#    #+#             */
/*   Updated: 2021/11/11 11:38:54 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    put_char(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    int    i;
    int    j;
    
    i = 0;
    while (i <= 98)
    {
        j = i;
        while (++j <= 99)
        {
            put_char((i / 10) + '0');
            put_char((i % 10) + '0');
            write(1, " ", 1);
            put_char((j / 10) + '0');
            put_char((j % 10) + '0');
            if (i != 98 || j != 99)
            {
                write(1, ", ", 2);
            }
        }
        i++;
    }
}
int main()
{
    ft_print_comb2();
}


