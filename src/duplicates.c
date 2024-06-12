/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicates.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:12:33 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/03 14:12:39 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicates(char **av)
{
	int	i;
	int	i1;

	i = 1;
	while (av[i])
	{
		i1 = 1;
		while (av[i1])
		{
			if (i != i1 && num_check(av[i], av[i1]) == 0)
				return (1);
			i1++;
		}
		i++;
	}
	return (0);
}

int	num_check(char *str, char *str1)
{
	int	i;
	int	i1;

	i = 0;
	i1 = 0;
	if (str[i] == '+')
	{
		if (str1[i1] != '+')
			i++;
	}
	else if (str1[i1] == '+')
		i1++;
	while (str[i] && str1[i1] && str[i] == str1[i1])
	{
		i++;
		i1++;
	}
	return ((unsigned char)str[i] - (unsigned char)str1[i1]);
}
