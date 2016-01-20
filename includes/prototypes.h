/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:29:38 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 17:11:56 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "env.h"
# include "caps.h"

void	init_signals(void);
void	signal_handler(int signal);
void	terminal_normal_mode(void);
void	terminal_catch_mode(void);
void	quit(char *error);
void	init_caps(t_caps *caps);
int		get_window_width(void);
int		get_window_height(void);
void	set_cursor_position(t_env *env, int x, int y);

#endif
