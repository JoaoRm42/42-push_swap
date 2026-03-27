/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:57:46 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/03 14:27:40 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_shared.h"

static char	*skip_prefix(char *str, int *sign)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign = -1;
		str++;
	}
	return (str);
}

static long int	overflow_value(int sign)
{
	if (sign < 0)
		return (LONG_MIN);
	return (LONG_MAX);
}

long int	ft_atoi(char *str)
{
	int				sign;
	unsigned long	res;
	unsigned long	limit;

	sign = 1;
	res = 0;
	str = skip_prefix(str, &sign);
	if (sign < 0)
		limit = (unsigned long)LONG_MAX + 1UL;
	else
		limit = (unsigned long)LONG_MAX;
	while (*str >= '0' && *str <= '9')
	{
		if (res > limit / 10 || (res == limit / 10
				&& (unsigned long)(*str - '0') > limit % 10))
			return (overflow_value(sign));
		res = res * 10 + (unsigned long)(*str - '0');
		str++;
	}
	if (sign < 0 && res == (unsigned long)LONG_MAX + 1UL)
		return (LONG_MIN);
	return ((long int)(res * sign));
}

int	max(t_list *stack)
{
	int	i;

	i = stack->index;
	while (stack)
	{
		if (stack->index > i)
			i = stack->index;
		stack = stack->next;
	}
	return (i);
}
