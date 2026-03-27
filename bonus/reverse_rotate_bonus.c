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

void	rra(t_list **stack)
{
	stack_reverse_rotate(stack);
}

void	rrb(t_list **stack)
{
	stack_reverse_rotate(stack);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	stack_reverse_rotate(stack_a);
	stack_reverse_rotate(stack_b);
}
