/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/08 13:58:09 by                   #+#    #+#             */
/*   Updated: 2015/10/08 14:00:12 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		s[i++] = '\0';
}

