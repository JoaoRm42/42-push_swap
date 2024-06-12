/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:43:11 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 13:26:35 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	checkerisnotnum(int argc, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] == '-' || av[i][j] == '+') && !av[i][j])
				j++;
			while (av[i][j] >= '0' && av[i][j] <= '9')
				j++;
			if (av[i][j] && (!(av[i][j] >= '0' && av[i][j] <= '9')))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
		}
		i++;
	}
}

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
	if (stack_a == NULL || *stack_a != NULL)
		stack_freeonerror(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		stack_freeonerror(stack_b);
	write(1, "Error\n", 6);
	exit (1);
}
