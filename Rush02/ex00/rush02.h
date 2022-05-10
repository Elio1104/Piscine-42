/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:46:16 by alondot           #+#    #+#             */
/*   Updated: 2021/11/28 20:03:18 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_dict{
	char	*integer;
	char	*string;
}	t_dict;

t_dict			*open_dict(void);
structs_dict	*put_struct(char *str, t_dict *tab, int ligne);
char			*put_string(char *str, t_dict *tab, int i);
char			*put_integer(char *str, t_dict *tab, int i);
int				ligne_count(void);
char			*copy_dict(char *str, int ligne);
void			ft_putstr(char *str);
int				ft_tcheck_input(int nb_arg, char **arg);
int				ft_strlen(char *str);
char			*ft_clean_input(char *str, int size);
char			*ft_strcpy(char *dest, char *src);
void			print_array(char *arr, t_dict *dico, int size, int dico_size);
void			putstr(char *str);
int				ft_strcmp(char *str1, char *str2);
void			find_and_print(char *str, t_dict *dico, int dico_size, int last_number);
int				find_last_number(char *array, int size);
void			find_and_print(char *str, t_dict *dico, int dico_size, int is_last_number);
void			print0(char number, t_dict *dico, int dico_size, int is_last_number);
void			print1(char number, t_dict *dico, int dico_size, int is_last_number);
void			print2(char number, t_dict *dico, int dico_size, int is_last_number);
void			print3(char number, t_dict *dico, int dico_size, int is_last_number);

#endif
