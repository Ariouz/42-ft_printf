/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalvez <vicalvez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:37:31 by vicalvez          #+#    #+#             */
/*   Updated: 2023/11/15 19:38:19 by vicalvez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_free_args(void *arg)
{
	t_arg	*targ;

	if (!arg)
		return ;
	targ = (t_arg *) arg;
	free(targ->arg);
	free(targ->flags);
	free(targ);
}

void	ft_free_formats(void *v)
{
	t_format	*format;

	if (v == NULL)
		return ;
	format = (t_format *) v;
	free(format);
}
