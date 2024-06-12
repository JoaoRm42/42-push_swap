/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:01:27 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/03 14:38:41 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checkpos(t_list **stack)
{
	t_list	*tmp;
	int		i;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

int	checktargetbpos(t_list **stack, int index, int max, int targetpos)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->index > index && tmp->index < max)
		{
			max = tmp->index;
			targetpos = tmp->pos;
		}
		tmp = tmp->next;
	}
	if (max != INT_MAX)
		return (targetpos);
	tmp = *stack;
	while (tmp)
	{
		if (tmp->index < max)
		{
			max = tmp->index;
			targetpos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (targetpos);
}

void	checktargetposition(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		targetpos;

	tmp = *stack_b;
	checkpos(stack_a);
	checkpos(stack_b);
	targetpos = 0;
	while (tmp)
	{
		targetpos = checktargetbpos(stack_a, tmp->index, INT_MAX, targetpos);
		tmp->target = targetpos;
		tmp = tmp->next;
	}
}
