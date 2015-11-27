/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:35:59 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/26 09:53:58 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	
	str = malloc(sizeof(char) * len);
	if (!*s || start == 0 || len == 0 || str == NULL)
		return (NULL);
	while (start--)
		s++;
	while (len--)
		*str++ = *s++;
	return (str);
}
