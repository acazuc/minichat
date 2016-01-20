/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 12:02:40 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 17:05:00 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minichat.h"

void	signal_handler(int signal)
{
	if (signal == SIGINT || signal == SIGKILL || signal == SIGSEGV
			|| signal == SIGFPE || signal == SIGBUS)
		quit("");
}
