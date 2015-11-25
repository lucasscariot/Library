/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:07:01 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/24 13:24:12 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	if (n == 0)
		return (dest);
	s1 = (char*)dest;
	s2 = (char*)src;
	while (n--)
		*s1++ = *s2++;
	return (dest);
}
