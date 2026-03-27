/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_core.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 10:30:00 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/27 10:30:00 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_shared.h"

void	stack_swap(t_list *stack)
{
	int	tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack->valor;
	stack->valor = stack->next->valor;
	stack->next->valor = tmp;
	tmp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp;
}

void	stack_push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (!src || !*src || !dst)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

void	stack_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	stack_reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*before_last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	before_last = *stack;
	while (before_last->next->next)
		before_last = before_last->next;
	last = before_last->next;
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
}
