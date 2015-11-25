/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:38:57 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/24 14:10:29 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *s1;
	char *s2;

	if (n == 0)
		return (dest);
	s1 = (char*)dest;
	s2 = (char*)src;
	while (*s2 != c)
	{
		*s1++ = *s2++;
		if (*s2 == '\0')
			return (NULL);
	}
	*s1++ = *s2++;
	return (dest);
}
