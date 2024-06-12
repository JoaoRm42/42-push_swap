/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   on_moves3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:07:46 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/22 14:00:28 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb1(t_list **stack, int *cost)
{
	while (*cost)
	{
		if (*cost < 0)
		{
			(*cost)++;
			rrb(stack);
		}
		else if (*cost > 0)
		{
			(*cost)--;
			rb(stack);
		}
	}
}

void	ra1(t_list **stack, int *cost)
{
	while (*cost)
	{
		if (*cost < 0)
		{
			(*cost)++;
			rra(stack);
		}
		else if (*cost > 0)
		{
			(*cost)--;
			ra(stack);
		}
	}
}

void	rr2(t_list **stack_a, t_list **stack_b, int *a, int *b)
{
	while (*a > 0 && *b > 0)
	{
		rr(stack_a, stack_b);
		(*a)--;
		(*b)--;
	}
}

void	rrr2(t_list **stack_a, t_list **stack_b, int *a, int *b)
{
	while (*a < 0 && *b < 0)
	{
		rrr(stack_a, stack_b);
		(*a)++;
		(*b)++;
	}
}

void	move(t_list **stack_a, t_list **stack_b, int a, int b)
{
	if (a < 0 && b < 0)
		rrr2(stack_a, stack_b, &a, &b);
	else if (a > 0 && b > 0)
		rr2(stack_a, stack_b, &a, &b);
	ra1(stack_a, &a);
	rb1(stack_b, &b);
	pa(stack_a, stack_b);
}
