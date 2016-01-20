/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:26:23 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 17:49:17 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minichat.h"

int		main(void)
{
	t_env	*env;
	char	buffer[20];

	init_signals();
	tgetent(0, getenv("TERM"));
	if (!(env = malloc(sizeof(*env))))
		quit("Failed to malloc env");
	if (!(env->caps = malloc(sizeof(*env->caps))))
		quit("Failed to malloc env caps");
	init_caps(env->caps);
	terminal_catch_mode();
	/*ft_putstr(env->caps->fullscreen_start);
	ft_putstr(env->caps->clear);
	ft_putstr(env->caps->stand_start);
	ft_putstr(env->caps->bold_start);
	int i = 0;
	set_cursor_position(env, 0, get_window_height() - 2);
	int width = get_window_width();
	while (i < width)
	{
		ft_putchar('-');
		i++;
	}
	ft_putstr(env->caps->stand_end);*/
	fcntl(0, F_SETFL, fcntl(0, F_GETFL) | O_NONBLOCK);
	int t = 0;
	int rd;
	while (t < 5)
	{
		while ((rd = read(0, buffer, 20)) < 1)
		{
			//check tcp
		}
		ft_putnbr(rd);
		ft_putchar(' ');
		ft_putendl(buffer);
		t++;
	}
	fcntl(0, F_SETFL, fcntl(0, F_GETFL) & ~O_NONBLOCK);
	//ft_putstr(env->caps->fullscreen_end);
	terminal_normal_mode();
	return (0);
}
