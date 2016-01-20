/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cursor_position.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:06:45 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 17:11:22 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minichat.h"

void	set_cursor_position(t_env *env, int x, int y)
{
	ft_putstr(tgoto(env->caps->move, x, y));
}
