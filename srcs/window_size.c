/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:53:25 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 17:21:36 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minichat.h"

int		get_window_width(void)
{
	return (tgetnum("co"));
}

int		get_window_height(void)
{
	return (tgetnum("li"));
}
