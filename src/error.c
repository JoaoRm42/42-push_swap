/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:43:11 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 15:00:44 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_shared.h"

void	stack_freeonerror(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	check_error(t_list **stack_a, t_list **stack_b)
{
	if (stack_a)
		stack_freeonerror(stack_a);
	if (stack_b)
		stack_freeonerror(stack_b);
	ft_putstr_fd("Error\n", 2);
	exit (1);
}
