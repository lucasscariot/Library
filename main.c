/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/04 01:55:30 by lucas             #+#    #+#             */
/*   Updated: 2015/10/08 07:51:30 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	ft_putstr("ft_putnbr :\n");
	ft_putnbr(21);
	ft_putstr("\nft_atoi :\n");
	ft_putnbr(ft_atoi("42"));
	ft_putstr("\nft_strlen :\n");
	ft_putnbr(ft_strlen("Bonjour"));
	ft_putstr("\nft_strcmp :\n");
	ft_putnbr(ft_strcmp("coucou", "coucoU"));
	ft_putstr("\nft_strncmp :\n");
	ft_putnbr(ft_strncmp("coucou", "coucoU", 3));
	ft_putstr("\nft_strchr :\n");
	ft_putstr(ft_strchr("Bonjour, ceci est la fin", 'f'));
	ft_putstr("\nft_strrchr :\n");
	ft_putstr(ft_strrchr("Coucou, le test de cette fonction semble ok", 'o'));
	ft_putstr("\nft_strstr :\n");
	ft_putstr(ft_strstr("Ceci est un p pe pet peti petis petit test.", "petit"));
	ft_putstr("\nft_strnstr :\n");
	ft_putstr(ft_strnstr("Ceci est un peut etre un petit test", "pet", 3));
	ft_putstr("\nft_strdup :\n");
	ft_putstr(ft_strdup("Bim bam boum"));
	ft_putstr("\nft_tolower :\n");
	ft_putchar(ft_tolower('G'));
	ft_putstr("\nft_toupper :\n");
	ft_putchar(ft_toupper('r'));
	ft_putstr("\nft_isalpha :\n");
	ft_putnbr(ft_isalpha('L'));
	ft_putstr("\nft_isdigit :\n");
	ft_putnbr(ft_isdigit('5'));
	ft_putstr("\nft_isalnum :\n");
	ft_putnbr(ft_isalnum('\0'));
	ft_putchar('\n');
	return (0);
}
