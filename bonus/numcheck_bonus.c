/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numcheck_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:58:02 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/16 13:32:00 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	checkerforsymbols(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	checkerisnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	checkerforzeros(char *num)
{
	int	i;

	i = 0;
	if (checkerforsymbols(num[i]))
		i++;
	while (num[i] && num[i] == '0')
		i++;
	if (num[i] != '\0')
		return (0);
	return (1);
}

int	checkerfordigits(char *av)
{
	int	i;

	i = 0;
	if (checkerforsymbols(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && checkerisnum(av[i]))
		i++;
	if (av[i] != '\0' && !checkerisnum(av[i]))
		return (0);
	return (1);
}

int	mainchecker(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		if (!checkerfordigits(av[i]))
			return (0);
		j += checkerforzeros(av[i]);
		i++;
	}
	if (j > 1)
		return (0);
	if (has_duplicates(av))
		return (0);
	return (1);
}
