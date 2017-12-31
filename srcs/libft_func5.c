/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_func5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <jonkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/23 21:34:22 by jonkim            #+#    #+#             */
/*   Updated: 2017/12/30 00:00:43 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memalloc(size_t size)
{
	void	*st;

	if (!(st = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(st, size);
	return (void*)st;
}

char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(sizeof(char) * (size + 1)));
}
