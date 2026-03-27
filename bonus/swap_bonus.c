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

void	sa(t_list **stack_a)
{
	if (stack_a)
		stack_swap(*stack_a);
}

void	sb(t_list **stack_b)
{
	if (stack_b)
		stack_swap(*stack_b);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (stack_a)
		stack_swap(*stack_a);
	if (stack_b)
		stack_swap(*stack_b);
}
