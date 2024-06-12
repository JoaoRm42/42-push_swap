/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:57:08 by joaoped2          #+#    #+#             */
/*   Updated: 2023/03/03 14:00:30 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*checknextvalue(t_list *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	addnextvalue(t_list **stack, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tmp = checknextvalue(*stack);
	tmp->next = new;
}

t_list	*startstack(long int value)
{
	t_list	*tmp;

	tmp = malloc(sizeof (*tmp));
	if (!tmp)
		return (NULL);
	tmp->valor = value;
	tmp->index = 0;
	tmp->pos = 0;
	tmp->target = 0;
	tmp->a = 0;
	tmp->b = 0;
	tmp->next = NULL;
	return (tmp);
}

t_list	*init_stack(int ac, char **av)
{
	t_list		*stack_a;
	int			i;
	long int	number;

	number = 0;
	i = 1;
	stack_a = NULL;
	while (i < ac)
	{
		number = ft_atoi(av[i]);
		if (number > INT_MAX || number < INT_MIN)
			check_error(&stack_a, NULL);
		if (i == 1)
			stack_a = startstack((int)number);
		else
			addnextvalue(&stack_a, startstack((int)number));
		i++;
	}
	return (stack_a);
}
