/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:14:13 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/26 22:57:12 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2 && n)
	{
		while (n-- > 0)
		{
			if (*s1 != *s2)
			{
				if (*(unsigned char *)s1 > *(unsigned char *)s2)
					return (1);
				else
					return (-1);
			}
			if (*s1 == '\0')
				return (0);
			s1++;
			s2++;
		}
	}
	return (0);
}
