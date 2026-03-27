/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_state.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 10:30:00 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/27 10:30:00 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_shared.h"

int	isshifted(t_list *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->valor > stack->next->valor)
			return (0);
		stack = stack->next;
	}
	return (1);
}
