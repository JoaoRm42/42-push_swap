/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:03:45 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 13:27:21 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_list **stack)
{
	stack_rotate(stack);
}

void	rb(t_list **stack)
{
	stack_rotate(stack);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	stack_rotate(stack_a);
	stack_rotate(stack_b);
}
