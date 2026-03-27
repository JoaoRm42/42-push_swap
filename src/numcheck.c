/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:58:02 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 15:00:54 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_shared.h"

static int	checkerforsymbols(char c)
{
	return (c == '+' || c == '-');
}

static int	checkerisnum(char c)
{
	return (c >= '0' && c <= '9');
}

static int	isint(char *av)
{
	long int	nb;

	nb = ft_atoi(av);
	return (nb >= INT_MIN && nb <= INT_MAX);
}

int	checkerfordigits(char *av)
{
	int	i;

	if (!av || !av[0])
		return (0);
	i = 0;
	if (checkerforsymbols(av[i]))
		i++;
	if (!av[i])
		return (0);
	while (av[i] && checkerisnum(av[i]))
		i++;
	return (av[i] == '\0');
}

int	mainchecker(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!checkerfordigits(av[i]) || !isint(av[i]))
			return (0);
		i++;
	}
	return (!has_duplicates(av));
}
