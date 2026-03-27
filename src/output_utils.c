/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 10:30:00 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/27 10:30:00 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_shared.h"

void	ft_putstr(char *str)
{
	ft_putstr_fd(str, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
