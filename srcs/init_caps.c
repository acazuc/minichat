/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_caps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:47:56 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 17:39:03 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minichat.h"

void	init_caps(t_caps *caps)
{
	if (!(caps->clear = tgetstr("cl", 0)))
		quit("Can't load clear caps (sl)");
	if (!(caps->fullscreen_start = tgetstr("ti", 0)))
		quit("Can't load fullscreenstart caps (ti)");
	if (!(caps->fullscreen_end = tgetstr("te", 0)))
		quit("Can't load fullscreen end caps (te)");
	if (!(caps->underline_start = tgetstr("us", 0)))
		quit("Can't load underline start caps (us)");
	if (!(caps->underline_end = tgetstr("ue", 0)))
		quit("Can't load underline end caps (ue)");
	if (!(caps->bold_start = tgetstr("md", 0)))
		quit("Can't load bold start caps (md)");
	if (!(caps->bold_end = tgetstr("me", 0)))
		quit("Can't load bold end caps (me)");
	if (!(caps->stand_start = tgetstr("so", 0)))
		quit("Can't load stand start caps (so)");
	if (!(caps->stand_end = tgetstr("se", 0)))
		quit("Can't load stand end caps (se)");
	if (!(caps->move = tgetstr("cm", 0)))
		quit("Can't load goto caps (cm)");
}
