/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:26:51 by hdeclerc          #+#    #+#             */
/*   Updated: 2021/11/28 18:49:55 by asibille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"


int	main(int argc, char **argv)
{
	char	*array;

	if (!(ft_tcheck_input(argc, argv)))
	{
		ft_putstr("Error");
		return (0);
	}
	
	int size_dico = 41;

	


	array = malloc(sizeof(char) * ((ft_strlen(argv[1])) + 3));
	ft_strcpy(array, ft_clean_input(argv[1], ft_strlen(argv[1])));
	print_array(array, open_dict(), ft_strlen(array), size_dico);


	free(array);
	return (1);
}
