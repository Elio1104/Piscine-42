/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:55:13 by alondot           #+#    #+#             */
/*   Updated: 2021/11/28 18:08:55 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

typedef struct s_dict{
	char	*integer;
	char	*string;
}	t_dict;

char *put_integer(char *str, t_dict *tab, int i)
{
    char *b;
    
    tab[i].integer = malloc(sizeof(char) * 60);
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
    
    tab[i].string= malloc(sizeof(char) * 60);
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
int ligne_count(int ligne)
{
    int fd;
    char *str;
    
    fd = open("numbers.dict", O_RDONLY);
    str = malloc(sizeof(char) * 1);
    while (read(fd, str, 1))
    {
        if (str[0] == '\n')
            ligne++;
    }
    free(str);
    return (ligne);
}

char *copy_dict(char *str, int ligne)
{
    int fd;
    char *tmp;
    
    ligne = 0;
    fd = open("numbers.dict", O_RDONLY);
    str = malloc(sizeof(char) * 2000);
    tmp = str;
    while (read(fd, str, 1))
    {
        if (str[0] == '\n')
            ligne++;
        str++;
    }
    *str = '\0';
    str = tmp;
    return (str);
}
int main()
{
    char *str;
    int ligne;
    t_dict *tab;
    
    ligne = 0;
    str = NULL;
    tab = NULL;
    ligne = ligne_count(ligne);
    str = copy_dict(str, ligne);
    tab = put_struct(str, tab, ligne);
}

