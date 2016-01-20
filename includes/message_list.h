/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message_list.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 18:00:47 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 18:03:09 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MESSAGE_LIST_H
# define MESSAGE_LIST_H

# include "message.h"

typedef struct				s_message_list
{
	t_message				*message;
	struct s_message_list	*next;
}							t_message_list;

#endif
