/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeier <nmeier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:27:03 by nmeier            #+#    #+#             */
/*   Updated: 2014/11/08 17:42:10 by nmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

#define COMPILE_TIME_ASSERT(x) switch (x) {case 0: break; case (x): break;}

#define BUFSIZE 20

static inline int	absol(int *n)
{
	if (*n < 0)
	{
		*n = -(*n);
		return (1);
	}
	return (0);
}

static inline void	loop(char *buf, int *n, int *i)
{
	while (*n >= 10)
	{
		buf[BUFSIZE - *i] = (*n % 10) + 48;
		*n /= 10;
		*i = *i + 1;
	}
}

char				*ft_itoa(int n)
{
	char	*buf;
	char	*result;
	int		neg;
	int		i;

	COMPILE_TIME_ASSERT((int)(sizeof(int) == (4)));
	if (n == INT_MIN)
		return (ft_strcpy(ft_strnew(11), "-2147483648"));
	buf = ft_strnew(BUFSIZE);
	if (buf != NULL)
	{
		i = 1;
		neg = absol(&n);
		loop(buf, &n, &i);
		buf[BUFSIZE - i] = '0' + n;
		if (neg)
		{
			i++;
			buf[BUFSIZE - i] = '-';
		}
		result = ft_strsub(buf, BUFSIZE - i, i);
		free(buf);
		buf = result;
	}
	return (buf);
}
