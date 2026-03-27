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

#include "push_swap_shared.h"

static int	num_check(char *str, char *str1)
{
	long int	nb1;
	long int	nb2;

	nb1 = ft_atoi(str);
	nb2 = ft_atoi(str1);
	if (nb1 == nb2)
		return (0);
	if (nb1 < nb2)
		return (-1);
	return (1);
}

int	has_duplicates(char **av)
{
	int	i;
	int	i1;

	i = 1;
	while (av[i])
	{
		i1 = i + 1;
		while (av[i1])
		{
			if (num_check(av[i], av[i1]) == 0)
				return (1);
			i1++;
		}
		i++;
	}
	return (0);
}
