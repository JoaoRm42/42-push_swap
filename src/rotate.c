/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:03:45 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/22 14:06:22 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_list **stack)
{
	t_list	*tmp;
	t_list	*n;

	tmp = *stack;
	*stack = (*stack)->next;
	n = checknextvalue(*stack);
	tmp->next = NULL;
	n->next = tmp;
}

//ra (rotate a)
void	ra(t_list **stack)
{
	reverse(stack);
	ft_putstr("ra\n");
}

//rb (rotate b)
void	rb(t_list **stack)
{
	reverse(stack);
	ft_putstr("rb\n");
}

//rr (ra and rb)
void	rr(t_list **stack_a, t_list **stack_b)
{
	reverse(stack_a);
	reverse(stack_b);
	ft_putstr("rr\n");
}

void	rs(t_list **stack_a)
{
	int	min;
	int	size;

	min = checkerlowindex(stack_a);
	size = checkersize(*stack_a);
	if (min > (size / 2))
	{
		while (min < size)
		{
			rra(stack_a);
			min++;
		}
	}
	else
	{
		while (min > 0)
		{
			ra(stack_a);
			min--;
		}
	}
}
