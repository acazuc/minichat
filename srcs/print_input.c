/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 18:31:09 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 18:45:39 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minichat.h"

static void		print_bar(t_env *env, int input_height)
{
	int		i;

	ft_putstr(env->caps->stand_start);
	ft_putstr(env->caps->bold_start);
	set_cursor_position(env, 0, get_window_height() - input_height - 1);
	i = 0;
	while (i < get_window_width())
	{
		ft_putchar('-');
		i++;
	}
	ft_putstr(env->caps->bold_end);
	ft_putstr(env->caps->stand_end);
}

static void		clear_input(t_env *env, int input_height)
{
	int		i;
	int		y;

	y = get_window_height() - input_height;
	while (y < get_window_height())
	{
		set_cursor_position(env, 0, y);
		i = 0;
		while (i < get_window_width())
		{
			ft_putchar(' ');
			i++;
		}
		y++;
	}
}

void	print_input(t_env *env)
{
	int		input_height;

	input_height = ft_strcount(env->input, '\n') + 1;
	print_bar(env, input_height);
	clear_input(env, input_height);
}
