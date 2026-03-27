/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:04:10 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/22 13:58:00 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//rra (reverse rotate a)
void	rra(t_list **stack)
{
	stack_reverse_rotate(stack);
	ft_putstr("rra\n");
}

//rrb (reverse rotate b)
void	rrb(t_list **stack)
{
	stack_reverse_rotate(stack);
	ft_putstr("rrb\n");
}

//rrr (rra and rrb)
void	rrr(t_list **stack_a, t_list **stack_b)
{
	stack_reverse_rotate(stack_a);
	stack_reverse_rotate(stack_b);
	ft_putstr("rrr\n");
}
