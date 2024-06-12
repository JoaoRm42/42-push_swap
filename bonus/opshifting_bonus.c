/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opshifting_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:10:05 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 13:27:11 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pushb(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	delv;
	int	i;

	size = checkersize(*stack_a);
	delv = 0;
	i = 0;
	while (size > 6 && i < size && delv < (size / 2))
	{
		if ((*stack_a)->index <= (size / 2))
		{
			pb(stack_a, stack_b);
			delv++;
		}
		else
			ra(stack_a);
		i++;
	}
	while (size - delv > 3)
	{
		pb(stack_a, stack_b);
		delv++;
	}
}

int	isshifted(t_list *stack)
{
	while (stack->next != NULL)
	{
		if (stack->valor > stack->next->valor)
			return (0);
		stack = stack->next;
	}
	return (1);
}
