/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:16:18 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/25 13:21:48 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s)));
	if (s == NULL || f == NULL || str == NULL)
		return (NULL);
	while (s++ != NULL && *s)
		*str++ = (*f)(*s);
	return (str);
}
