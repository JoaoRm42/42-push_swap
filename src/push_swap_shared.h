/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_shared.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 10:30:00 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/27 10:30:00 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_SHARED_H
# define PUSH_SWAP_SHARED_H

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

int			checkerfordigits(char *av);
int			mainchecker(char **av);
int			has_duplicates(char **av);
void		checkerindex(t_list *stack, int size);
int			checkersize(t_list *stack);
void		checkpos(t_list **stack);
int			checktargetbpos(t_list **stack, int index, int max, int targetpos);
void		checktargetposition(t_list **stack_a, t_list **stack_b);
void		checkvalues(t_list **stack_a, t_list **stack_b);
int			checkabsolutenb(int nb);
void		checklessvalues(t_list **stack_a, t_list **stack_b);
int			checkerlowindex(t_list **stack);
void		stack_swap(t_list *stack);
void		stack_push(t_list **src, t_list **dst);
void		stack_rotate(t_list **stack);
void		stack_reverse_rotate(t_list **stack);
int			max(t_list *stack);
int			isshifted(t_list *stack);
t_list		*startstack(long int value);
void		addnextvalue(t_list **stack, t_list *new);
t_list		*init_stack(int ac, char **av);
long int	ft_atoi(char *str);
void		ft_putstr(char *str);
void		ft_putstr_fd(char *str, int fd);
void		stack_freeonerror(t_list **stack);
void		check_error(t_list **stack_a, t_list **stack_b);

#endif
