/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:57:57 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 13:27:07 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "get_next_line_bonus.h"

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
		--n;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}

int	do_moves(t_list **stack_a, t_list **stack_b, char *str)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(stack_a);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(stack_b);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(stack_a, stack_b);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(stack_a, stack_b);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(stack_a, stack_b);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(stack_a);
	else
		return (0);
	return (1);
}

void	do_moves2(t_list **stack_a, t_list **stack_b, char *str)
{
	if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(stack_b);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(stack_a);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(stack_b);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(stack_a, stack_b);
	else
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}

void	getting_str(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!do_moves(stack_a, stack_b, str))
			do_moves2(stack_a, stack_b, str);
		free(str);
		str = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_list		*stack_a;
	t_list		*stack_b;

	if (ac < 2)
		return (0);
	if (ac == 2)
		if (mainchecker(av))
			return (0);
	checkerisnotnum(ac, av);
	if (!mainchecker(av))
	{
		check_error(NULL, NULL);
		exit(0);
	}
	stack_a = init_stack(ac, av);
	stack_b = NULL;
	getting_str(&stack_a, &stack_b);
	if (isshifted(stack_a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	stack_freeonerror(&stack_a);
	stack_freeonerror(&stack_b);
}
