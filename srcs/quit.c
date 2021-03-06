/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 12:05:23 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 17:03:47 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minichat.h"

void	quit(char *error)
{
	ft_putstr_fd("\e[1;34m", 2);
	ft_putstr_fd(error, 2);
	ft_putstr_fd("\e[0m", 2);
	terminal_normal_mode();
	exit(1);
}
