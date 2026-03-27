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

void	pa(t_list **stack_a, t_list **stack_b)
{
	stack_push(stack_b, stack_a);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	stack_push(stack_a, stack_b);
}
