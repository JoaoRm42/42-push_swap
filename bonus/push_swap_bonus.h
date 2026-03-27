/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:57:30 by joaoped2          #+#    #+#             */
/*   Updated: 2023/04/11 13:24:10 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../src/push_swap_shared.h"

//moves
void		sa(t_list **stack_a);
void		sb(t_list **stack_b);
void		ss(t_list **stack_a, t_list **stack_b);
void		pa(t_list **stack_a, t_list **stack_b);
void		pb(t_list **stack_a, t_list **stack_b);
void		ra(t_list **stack);
void		rb(t_list **stack);
void		rr(t_list **stack_a, t_list **stack_b);
void		rra(t_list **stack);
void		rrb(t_list **stack);
void		rrr(t_list **stack_a, t_list **stack_b);

#endif
