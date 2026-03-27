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

# include "push_swap_shared.h"

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
void		shortshifting(t_list **stack);
void		shifting(t_list **stack_a, t_list **stack_b);
void		pushb(t_list **stack_a, t_list **stack_b);
void		rs(t_list **stack_a);
void		rb1(t_list **stack, int *cost);
void		ra1(t_list **stack, int *cost);
void		rr2(t_list **stack_a, t_list **stack_b, int *a, int *b);
void		rrr2(t_list **stack_a, t_list **stack_b, int *a, int *b);
void		move(t_list **stack_a, t_list **stack_b, int a, int b);

#endif
