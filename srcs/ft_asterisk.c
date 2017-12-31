/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asterisk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <jonkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 17:51:20 by jonkim            #+#    #+#             */
/*   Updated: 2017/12/30 18:59:24 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_asterisk_width(t_printf *pf)
{
	pf->str_i++;
	pf->arg.width = va_arg(pf->ap, int);
	if (pf->arg.width < 0)
	{
		pf->arg.width *= -1;
		pf->arg.minus = 1;
		pf->arg.zero = 0;
	}
	pf->arg.g_width = 1;
}

void	ft_asterisk_prec(t_printf *pf)
{
	pf->arg.g_prec = 1;
	pf->arg.prec = va_arg(pf->ap, int);
	pf->str_i += 2;
}
