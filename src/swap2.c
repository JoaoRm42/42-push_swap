/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:07:48 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/03 14:08:40 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap2(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	ft_swap2(stack_b, stack_a);
	ft_putstr("pa\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	ft_swap2(stack_a, stack_b);
	ft_putstr("pb\n");
}
