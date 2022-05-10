/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:48:08 by alondot           #+#    #+#             */
/*   Updated: 2021/11/28 17:48:11 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void open_dict()
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
    free(str);
}
