/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:46:16 by alondot           #+#    #+#             */
/*   Updated: 2021/11/28 17:47:32 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

void open_dict();
struct s_dict *put_struct(char *str, t_dict *tab, int ligne);
char *put_string(char *str, t_dict *tab, int i);
char *put_integer(char *str, t_dict *tab, int i);
int ligne_count(int ligne);
char *copy_dict(char *str, int *ligne);

typedef struct s_dict{
	char	*integer;
	char	*string;
}	t_dict;

#endif
