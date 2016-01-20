/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caps.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:44:32 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 17:34:12 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAPS_H
# define CAPS_H

typedef struct		s_caps
{
	char			*clear;
	char			*fullscreen_start;
	char			*fullscreen_end;
	char			*underline_start;
	char			*underline_end;
	char			*bold_start;
	char			*bold_end;
	char			*stand_start;
	char			*stand_end;
	char			*move;
}					t_caps;

#endif
