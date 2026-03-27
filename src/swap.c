/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:05:26 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/03 15:20:46 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *stack_a)
{
	stack_swap(stack_a);
	ft_putstr("sa\n");
}

void	sb(t_list *stack_b)
{
	stack_swap(stack_b);
	ft_putstr("sb\n");
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	stack_swap(stack_a);
	stack_swap(stack_b);
	ft_putstr("ss\n");
}
