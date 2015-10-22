/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeier <nmeier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 17:44:01 by nmeier            #+#    #+#             */
/*   Updated: 2015/10/22 17:44:11 by nmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

size_t			ft_ptrarraysize(void *ptrarray)
{
	void	**cast;
	size_t	size;

	size = 0;
	cast = ptrarray;
	while (cast[size])
		size++;
	return (size);
}

void			ft_freeptrarray(void *ptrarray)
{
	void	**cast;

	cast = ptrarray;
	while (*cast)
	{
		free(*cast);
		cast++;
	}
	free(ptrarray);
}
