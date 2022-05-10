/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alondot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:48:08 by alondot           #+#    #+#             */
/*   Updated: 2021/11/28 19:45:48 by alondot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict	*open_dict(void)
{
	char	*str;
	int		ligne;
	t_dict	*tab;

	ligne = 0;
	str = NULL;
	tab = NULL;
	ligne = ligne_count();
	str = copy_dict(str, ligne);
	tab = put_struct(str, tab, ligne);
	free(str);
	return (tab);
}
