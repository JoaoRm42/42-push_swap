/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:38:23 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/13 13:49:47 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*checkebeforevalue(t_list *stack)
{
	while (stack->next->next)
		stack = stack->next;
	return (stack);
}

void	checkvalues(t_list **stack_a, t_list **stack_b)
{
	t_list	*a;
	t_list	*b;
	int		a_s;
	int		b_s;

	a = *stack_a;
	b = *stack_b;
	a_s = checkersize(a);
	b_s = checkersize(b);
	while (b)
	{
		b->b = b->pos;
		if (b->pos > (b_s / 2))
			b->b = (b_s - b->pos) * -1;
		b->a = b->target;
		if (b->target > (a_s / 2))
			b->a = (a_s - b->target) * -1;
		b = b->next;
	}
}

int	checkabsolutenb(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}

void	checklessvalues(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		ac;
	int		bc;
	int		lmv;

	tmp = *stack_b;
	lmv = INT_MAX;
	while (tmp)
	{
		if ((checkabsolutenb(tmp->a) + checkabsolutenb(tmp->b)) < lmv)
		{
			lmv = checkabsolutenb(tmp->a) + checkabsolutenb(tmp->b);
			ac = tmp->a;
			bc = tmp->b;
		}
		tmp = tmp->next;
	}
	move(stack_a, stack_b, ac, bc);
}
