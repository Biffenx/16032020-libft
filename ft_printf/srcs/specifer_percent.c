/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifer_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilen <jwilen@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:44:19 by jwilen            #+#    #+#             */
/*   Updated: 2020/03/02 09:48:47 by jwilen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
**		Conversion %% for percent
*/

void		specifer_percent(t_tab *dt)
{
	asterix(dt);
	if (dt->w_i.mi == 0)
	{
		insert_pad(dt, 1);
		write(1, "%", 1);
	}
	else if (dt->w_i.mi == 1)
	{
		write(1, "%", 1);
		insert_pad(dt, 1);
	}
}
