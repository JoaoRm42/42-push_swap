/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:04:10 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 13:27:16 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

//reverse_rotate
void	rr1(t_list **stack)
{
	t_list	*tmp;
	t_list	*n;
	t_list	*bb;

	n = checknextvalue(*stack);
	bb = checkebeforevalue(*stack);
	tmp = *stack;
	*stack = n;
	(*stack)->next = tmp;
	bb->next = NULL;
}

//rra (reverse rotate a)
void	rra(t_list **stack)
{
	rr1(stack);
}

//rrb (reverse rotate b)
void	rrb(t_list **stack)
{
	rr1(stack);
}

//rrr (rra and rrb)
void	rrr(t_list **stack_a, t_list **stack_b)
{
	rr1(stack_a);
	rr1(stack_b);
}
