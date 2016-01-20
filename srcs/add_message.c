/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_message.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 18:23:45 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 18:27:52 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minichat.h"

void	add_message(t_env *env, t_message *message)
{
	t_message_list	*item;
	t_message_list	*list;

	if (!(item = malloc(sizeof(*item))))
		quit("Failed to malloc new message list item");
	item->message = message;
	item->next = NULL;
	list = env->messages;
	if (!list)
		env->messages = item;
	else
	{
		while (list->next)
			list = list->next;
		list->next = item;
	}
}
