/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:43:14 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/07 10:38:16 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*a;
	unsigned char	x;
	unsigned char	*p;

	x = (unsigned char)c;
	a = (unsigned char*)s;
	i = 0;
	while (a[i])
	{
		if (a[i] == x)
			p = &a[i];
		i++;
	}
	if (x == '\0')
	{
		i = strlen(s);
		p = &a[i];
	}
	if (p)
		return ((char*)p);
	else
		return (NULL);
}
