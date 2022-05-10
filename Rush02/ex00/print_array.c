/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asibille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:46:27 by asibille          #+#    #+#             */
/*   Updated: 2021/11/28 18:25:02 by asibille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

int		find_last_number(char *arr, int size);

void	print_array(char *arr, t_dict *dico, int size, int d_size)
{
	int	number_of_zeros;
	int	i;
	int	ln;

	i = 0;
	number_of_zeros = size - 3;
	ln = find_last_number(arr, size);
	while (i < size)
	{
		if (arr[i] != '0')
			print0(arr[i], dico, d_size, (ln != 0 || (size - 1 - i) > 2));
		--ln;
		if (arr[i + 1] != '0')
			print1(arr[i + 1], dico, d_size, (ln != 0 || (size - 1 - i) > 2));
		--ln;
		if (arr[i + 2] != '0')
			print2(arr[i + 2], dico, d_size, (ln != 0 || (size - 1 - i) > 2));
		if ((arr[i] != '0') || (arr[i + 1] != '0') || (arr[i + 2] != '0'))
			print3(number_of_zeros, dico, d_size, ln);
		--ln;
		number_of_zeros = number_of_zeros - 3;
		i = i + 3;
	}
	write(1, "\n", 1);
}

void	print0(char number, t_dict *dico, int dico_size, int last_number)
{
	char	str[2];
	str[0] = number;
	str[1] = '\0';

	find_and_print(str, dico, dico_size, 1);
	find_and_print("100", dico, dico_size, last_number);
}
	
void	print1(char number, t_dict *dico, int dico_size, int last_number)
{
	char	str[3];

	str[0] = number;
	str[1] = '0';
	str[2] = '\0';
	find_and_print(str, dico, dico_size, last_number);
}

void	print2(char number, t_dict *dico, int dico_size, int last_number)
{
	char	str[2];

	str[0] = number;
	str[1] = '\0';
	find_and_print(str, dico, dico_size, last_number);
}

void	print3(char number_of_zeros, t_dict *dico, int dico_size, int last_number)
{
	char	*str;
	char	*ptr;

	if (number_of_zeros > 0)
	{
		str = malloc(sizeof(char) * (number_of_zeros + 2));
		ptr = str;
		str[0] = '1';
		++str;
		while (number_of_zeros > 0)
		{
			*str = '0';
			--number_of_zeros;
			++str;
		}
		*str = '\0';
		find_and_print(ptr, dico, dico_size, last_number);
	//liberer memoire
	}
}

/*
int main()
{
	int size = 9;
	int dico_size = 41;
	char input[9] = {'0','0','1','2','4','0','0','0','0'};
    t_dict dico[41];
    dico[0].key = "0";
    dico[1].key = "1";
    dico[2].key = "2";
    dico[3].key = "3";
    dico[4].key = "4";
    dico[5].key = "5";
    dico[6].key = "6";
    dico[7].key = "7";
    dico[8].key = "8";
    dico[9].key = "9";
    dico[10].key = "10";
    dico[11].key = "11";
    dico[12].key = "12";
    dico[13].key = "13";
    dico[14].key = "14";
    dico[15].key = "15";
    dico[16].key = "16";
    dico[17].key = "17";
    dico[18].key = "18";
    dico[19].key = "19";
    dico[20].key = "20";
    dico[21].key = "30";
    dico[22].key = "40";
    dico[23].key = "50";
    dico[24].key = "60";
    dico[25].key = "70";
    dico[26].key = "80";
    dico[27].key = "90";
    dico[28].key = "100";
    dico[29].key = "1000";
    dico[30].key = "1000000";
    dico[31].key = "1000000000";
    dico[32].key = "1000000000000";
    dico[33].key = "1000000000000000";
    dico[34].key = "1000000000000000000";
    dico[35].key = "1000000000000000000000";
    dico[36].key = "1000000000000000000000000";
    dico[37].key = "1000000000000000000000000000";
    dico[38].key = "1000000000000000000000000000000";
    dico[39].key = "1000000000000000000000000000000000";
    dico[40].key = "1000000000000000000000000000000000000";
    
    dico[0].valeur = "zero";
    dico[1].valeur = "one";
    dico[2].valeur = "two";
    dico[3].valeur = "three";
    dico[4].valeur = "four";
    dico[5].valeur = "five";
    dico[6].valeur = "six";
    dico[7].valeur = "seven";
    dico[8].valeur = "eight";
    dico[9].valeur = "nine";
    dico[10].valeur = "ten";
    dico[11].valeur = "eleven";
    dico[12].valeur = "twelve";
    dico[13].valeur = "thirtee";
    dico[14].valeur = "fourteen";
    dico[15].valeur = "fifteen";
    dico[16].valeur = "sixteen";
    dico[17].valeur = "seventeen";
    dico[18].valeur = "eighteen";
    dico[19].valeur = "nineteen";
    dico[20].valeur = "twenty";
    dico[21].valeur = "thirty";
    dico[22].valeur = "forty";
    dico[23].valeur = "fifty";
    dico[24].valeur = "sixty";
    dico[25].valeur = "seventy";
    dico[26].valeur = "eighty";
    dico[27].valeur = "ninety";
    dico[28].valeur = "hundred";
    dico[29].valeur = "thousand";
    dico[30].valeur = "million";
    dico[31].valeur = "billion";
    dico[32].valeur = "trillion";
    dico[33].valeur = "quadrillion";
    dico[34].valeur = "quintillion";
    dico[35].valeur = "sextillion";
    dico[36].valeur = "septillion";
    dico[37].valeur = "octillion";
    dico[38].valeur = "nonillion";
    dico[39].valeur = "decillion";
    dico[40].valeur = "undecillion";

    print_array(input, dico, size, dico_size);
}
*/
