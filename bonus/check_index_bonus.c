/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_index_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:04:08 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 13:26:20 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	checkerindex(t_list *stack, int size)
{
	t_list	*tmp;
	t_list	*max;
	int		min;

	while (--size > 0)
	{
		tmp = stack;
		max = NULL;
		min = INT_MIN;
		while (tmp)
		{
			if (tmp->valor == INT_MIN && tmp->index == 0)
				tmp->index = 1;
			if (tmp->valor > min && tmp->index == 0)
			{
				min = tmp->valor;
				max = tmp;
				tmp = stack;
			}
			else
				tmp = tmp->next;
		}
		if (max != NULL)
			max->index = size;
	}
}

int	checkerlowindex(t_list **stack)
{
	t_list	*tmp;
	int		minindex;
	int		minpos;

	tmp = *stack;
	minindex = INT_MAX;
	checkpos(stack);
	minpos = tmp->pos;
	while (tmp)
	{
		if (tmp->index < minindex)
		{
			minindex = tmp->index;
			minpos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (minpos);
}
