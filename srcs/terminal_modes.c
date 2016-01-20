/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_modes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 12:06:48 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 16:35:32 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minichat.h"

void	terminal_normal_mode(void)
{
	struct termios	attr;

	tcgetattr(0, &attr);
	attr.c_lflag |= (ECHO | ICANON);
	attr.c_oflag |= OPOST;
	tcsetattr(0, TCSADRAIN, &attr);
}

void	terminal_catch_mode(void)
{
	struct termios	attr;

	tcgetattr(0, &attr);
	attr.c_lflag &= ~(ECHO | ICANON);
	attr.c_oflag &= ~OPOST;
	tcsetattr(0, TCSADRAIN, &attr);
}
