/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifer_x_alfa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilen <jwilen@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 11:35:13 by jwilen            #+#    #+#             */
/*   Updated: 2020/02/26 14:54:33 by jwilen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		check_x_alfa(t_tab *dt, char *ltr, char *str, unsigned int len)
{
	if (dt->pre_i.pre > ft_strlen(str))
		insert_pad2(dt, (dt->pre_i.pre + len));
	else
		insert_pad2(dt, len + 2);
	write(dt->fd, ltr, 2);
	dt->len += 2;
	insert_pad_neg(dt, len);
	write(dt->fd, str, len);
}

void		check_x_beta(t_tab *dt)
{
	insert_pad(dt, 0);
	dt->len -= 1;
}

void		c_x_gamma(t_tab *dt, char *ltr, char *str, unsigned int len)
{
	if (dt->pre_i.pre > ft_strlen(str))
		insert_pad2(dt, dt->pre_i.pre);
	else
		insert_pad2(dt, len);
	(dt->pre_i.pre) ? insert_pad_zero(dt, len) : 0;
	if (dt->w_i.h_tag)
	{
		write(dt->fd, ltr, 2);
		dt->len += 2;
		write(dt->fd, str, len);
	}
	else
		write(dt->fd, str, len);
}

void		c_x_delta(t_tab *dt, char *ltr, char *str, unsigned int len)
{
	write(dt->fd, ltr, 2);
	dt->len += 2;
	insert_pad_neg(dt, len);
	write(dt->fd, str, len);
	if (dt->pre_i.pre > ft_strlen(str))
		insert_pad(dt, (dt->pre_i.pre + len));
	else
		insert_pad(dt, len + 2);
}

void		c_x_epsilon(t_tab *dt, char *ltr, char *str, unsigned int len)
{
	(dt->pre_i.pre) ? insert_pad_zero(dt, len) : 0;
	if (dt->w_i.h_tag)
	{
		write(dt->fd, ltr, 2);
		dt->len += 2;
		write(dt->fd, str, len);
	}
	else
		write(dt->fd, str, len);
	if (dt->pre_i.pre > ft_strlen(str))
		insert_pad(dt, dt->pre_i.pre);
	else
		insert_pad(dt, len);
}
