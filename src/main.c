/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:57:57 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 15:00:38 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int			size;
	t_list		*stack_a;
	t_list		*stack_b;

	if (ac < 2)
		return (0);
	if (!mainchecker(av))
		check_error(NULL, NULL);
	stack_a = init_stack(ac, av);
	stack_b = NULL;
	size = checkersize(stack_a);
	checkerindex(stack_a, size + 1);
	swap(&stack_a, &stack_b, size);
	stack_freeonerror(&stack_a);
	stack_freeonerror(&stack_b);
}
