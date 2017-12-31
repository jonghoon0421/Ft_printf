/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <jonkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 18:48:14 by jonkim            #+#    #+#             */
/*   Updated: 2017/12/22 20:57:17 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_set_percent_zero(t_printf *pf)
{
	int		i;

	i = -1;
	if (pf->arg.g_width == 1 && pf->arg.width > 1)
		while (++i < pf->arg.width - 1)
			pf->ret += write(1, "0", 1);
	pf->ret += write(1, "%", 1);
}

void	ft_set_percent_left(t_printf *pf)
{
	int		i;

	i = -1;
	pf->ret += write(1, "%", 1);
	if (pf->arg.g_width == 1 && pf->arg.width > 1)
		while (++i < pf->arg.width - 1)
			pf->ret += write(1, " ", 1);
}

void	ft_set_percent_wpad(t_printf *pf)
{
	int		i;

	i = -1;
	if (pf->arg.g_width == 1 && pf->arg.width > 1)
		while (++i < pf->arg.width - 1)
			pf->ret += write(1, " ", 1);
	pf->ret += write(1, "%", 1);
}

void	ft_set_percent(t_printf *pf)
{
	if (pf->arg.zero == 1)
		ft_set_percent_zero(pf);
	else if (pf->arg.minus == 1)
		ft_set_percent_left(pf);
	else
		ft_set_percent_wpad(pf);
	pf->str_i++;
}
