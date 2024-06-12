/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opshifting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:10:05 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/13 13:58:04 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	shortshifting(t_list **stack)
{
	int	max1;

	max1 = max(*stack);
	if (isshifted(*stack))
		return ;
	if ((*stack)->index == max1)
		ra(stack);
	else if ((*stack)->next->index == max1)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(*stack);
}

void	shifting(t_list **stack_a, t_list **stack_b)
{
	pushb(stack_a, stack_b);
	shortshifting(stack_a);
	while (*stack_b)
	{
		checktargetposition(stack_a, stack_b);
		checkvalues(stack_a, stack_b);
		checklessvalues(stack_a, stack_b);
	}
	if (!isshifted(*stack_a))
		rs(stack_a);
}

void	swap(t_list **stack_a, t_list **stack_b, int ac)
{
	if (ac == 2 && (!isshifted(*stack_a)))
		sa(*stack_a);
	else if (ac == 3)
		shortshifting(stack_a);
	else if (ac > 3 && (!isshifted(*stack_a)))
		shifting(stack_a, stack_b);
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
