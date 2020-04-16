/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilen <jwilen@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:21:57 by jwilen            #+#    #+#             */
/*   Updated: 2020/02/27 11:25:31 by jwilen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		insert_pad(t_tab *dt, int len)
{
	int t;

	t = 0;
	while (t++ < dt->wi - len)
	{
		if (dt->w_i.zero && !dt->w_i.mi)
			write(dt->fd, "0", 1);
		else
			write(dt->fd, " ", 1);
		dt->len++;
	}
}

void		insert_pad_neg(t_tab *dt, int len)
{
	int t;

	t = 0;
	while (t++ < dt->pre_i.pre - len)
		write(dt->fd, "0", 1);
	dt->len++;
}

void		insert_pad2(t_tab *dt, int len)
{
	int t;

	t = 0;
	while (t++ < dt->wi - len)
	{
		if (dt->w_i.zero && !dt->w_i.mi)
			write(dt->fd, " ", 1);
		else
			write(dt->fd, "0", 1);
		dt->len++;
	}
}

void		insert_pad_zero(t_tab *dt, int len)
{
	int t;

	t = 0;
	while (t++ < dt->pre_i.pre - len)
	{
		(dt->pre) ? write(dt->fd, "0", 1) : write(dt->fd, " ", 1);
		dt->len++;
	}
}

void		insert_pad_zero2(t_tab *dt, int len)
{
	int t;

	t = 0;
	while (t++ < dt->wi - len - 1)
	{
		(dt->wi) ? write(dt->fd, "0", 1) : write(dt->fd, " ", 1);
		dt->len++;
	}
}
