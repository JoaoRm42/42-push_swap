/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap2_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:07:48 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 13:27:28 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_swap2(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_a && *stack_b)
		tmp = (*stack_a)->next;
	else
		return ;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	ft_swap2(stack_b, stack_a);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	ft_swap2(stack_a, stack_b);
}
