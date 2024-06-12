/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:05:26 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 13:27:26 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_swap(t_list *stack)
{
	int	tmp;

	if (stack)
		tmp = stack->valor;
	else
		return ;
	stack->valor = stack->next->valor;
	stack->next->valor = tmp;
	tmp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp;
}

void	sa(t_list **stack_a)
{
	ft_swap(*stack_a);
}

void	sb(t_list **stack_b)
{
	ft_swap(*stack_b);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(*stack_a);
	ft_swap(*stack_b);
}
