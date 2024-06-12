/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:57:30 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 15:00:59 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				valor;
	int				index;
	int				pos;
	int				target;
	int				a;
	int				b;
	struct s_list	*next;
}				t_list;

//checkers
int			checkerforsymbols(char c);
int			checkerisnum(char c);
int			checkerforzeros(char *num);
int			checkerfordigits(char *av);
int			mainchecker(char **av);
int			has_duplicates(char **av);
int			num_check(char *str, char *str1);
void		checkerindex(t_list *stack, int size);
int			checkersize(t_list *stack);
void		checkpos(t_list **stack);
void		*checknextvalue(t_list *stack);
t_list		*checkebeforevalue(t_list *stack);
int			checktargetbpos(t_list **stack, int index, int max, int targetpos);
void		checktargetposition(t_list **stack_a, t_list **stack_b);
void		checkvalues(t_list **stack_a, t_list **stack_b);
int			checkabsolutenb(int nb);
void		checklessvalues(t_list **stack_a, t_list **stack_b);
int			isshifted(t_list *stack);
int			checkerlowindex(t_list **stack);

//moves
void		sa(t_list *stack_a);
void		sb(t_list *stack_b);
void		ss(t_list *stack_a, t_list *stack_b);
void		pa(t_list **stack_a, t_list **stack_b);
void		pb(t_list **stack_a, t_list **stack_b);
void		ra(t_list **stack);
void		rb(t_list **stack);
void		rr(t_list **stack_a, t_list **stack_b);
void		rra(t_list **stack);
void		rrb(t_list **stack);
void		rrr(t_list **stack_a, t_list **stack_b);

//onmoves
void		swap(t_list **stack_a, t_list **stack_b, int ac);
int			max(t_list *stack);
void		shortshifting(t_list **stack);
void		shifting(t_list **stack_a, t_list **stack_b);
void		pushb(t_list **stack_a, t_list **stack_b);
void		rs(t_list **stack_a);
void		reverse(t_list **stack);
void		rb1(t_list **stack, int *cost);
void		ra1(t_list **stack, int *cost);
void		rr1(t_list **stack);
void		rr2(t_list **stack_a, t_list **stack_b, int *a, int *b);
void		rrr2(t_list **stack_a, t_list **stack_b, int *a, int *b);
void		move(t_list **stack_a, t_list **stack_b, int a, int b);

//stacks
t_list		*startstack(long int value);
void		addnextvalue(t_list **stack, t_list *new);
t_list		*init_stack(int ac, char **av);
int			operationdone(t_list *stack);

//utils
long int	ft_atoi(char *str);
void		ft_swap(t_list *stack);
void		ft_swap2(t_list **stack_a, t_list **stack_b);
void		ft_putstr(char *str);
void		stack_freeonerror(t_list **stack);
void		check_error(t_list **stack_a, t_list **stack_b);

#endif
