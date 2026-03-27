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

//ra (rotate a)
void	ra(t_list **stack)
{
	stack_rotate(stack);
	ft_putstr("ra\n");
}

//rb (rotate b)
void	rb(t_list **stack)
{
	stack_rotate(stack);
	ft_putstr("rb\n");
}

//rr (ra and rb)
void	rr(t_list **stack_a, t_list **stack_b)
{
	stack_rotate(stack_a);
	stack_rotate(stack_b);
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
