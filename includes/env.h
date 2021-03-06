/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:43:37 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 18:08:11 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

# include "message_list.h"
# include "caps.h"

typedef struct		s_env
{
	t_message_list	*messages;
	t_caps			*caps;
	char			*input;
}					t_env;

#endif
