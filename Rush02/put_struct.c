/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lecture_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:33:11 by alondot           #+#    #+#             */
/*   Updated: 2021/11/28 17:33:15 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *put_integer(char *str, t_dict *tab, int i)
{
    char *b;

    tab[i].integer = malloc(sizeof(char) * 50);
    b = tab[i].integer;
    while (*str != ':')
    {
        *tab[i].integer = *str;
        tab[i].integer++;
        str++;
    }
    *tab[i].integer = '\0';
    str += 2;
    tab[i].integer = b;
    return (str);
}

char *put_string(char *str, t_dict *tab, int i)
{
    char *c;
    
    tab[i].string= malloc(sizeof(char) * 50);
    c = tab[i].string;
    while (*str != '\n')
    {
        *tab[i].string = *str;
        tab[i].string++;
        str++;
    }
    *tab[i].string = '\0';
    str++;
    tab[i].string = c;
    return (str);
}

struct s_dict *put_struct(char *str, t_dict *tab, int ligne)
{
    int i;
    i = 0;
    tab = malloc(sizeof(t_dict) * (ligne + 1));
    while (i < ligne)
    {
        str = put_integer(str, tab, i);
        str = put_string(str, tab, i);
        i++;
    }
    return (tab);
}