/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/04 01:55:30 by lucas             #+#    #+#             */
/*   Updated: 2015/10/09 11:46:20 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_show_result(int n)
{
	if (n == 1)
		printf("\033[32;01mWork\033[00m\n");
	else
		printf("\033[31;01mFail\033[00m\n");
}

int	t_ft_atoi(void)
{
	ft_putstr("  ft_atoi		|	");
	if (ft_atoi("876") == 876)
	{
		if (ft_atoi("gre") == 0)
			return (1);
	}
	return (0);
}

int	t_ft_strlen(void)
{
	ft_putstr("  ft_strlen		|	");
	if (ft_strlen("Ceci est une grosse phrase") == strlen("Ceci est une grosse phrase"))
		return (1);
	return (0);
}

int	t_ft_strcmp(void)
{
	ft_putstr("  ft_strcmp		|	");
	if(strcmp("Coucou", "Coucou") == ft_strcmp("Coucou", "Coucou"))
	{
		if(strcmp("", "") == ft_strcmp("", ""))
		{
			if(strcmp("", "Ce") == ft_strcmp("", "Ce"))
				return (1);
		}
	}
	return (0);
}

int	t_ft_strdup(void)
{
	char	*str;
	str = malloc(sizeof(char) * 20 + 1);
	str = "pif paf pouf";
	ft_putstr("  ft_strdup		|	");
	if (strcmp(str, ft_strdup(str)) == 0)
		return (1);
	return (0);
}

int	t_ft_strcpy(void)
{
	ft_putstr("  ft_strcpy		|       ");
	char	*str1;
	char	*str2;
	str1 = malloc(sizeof(str1) * 20);
	str2 = malloc(sizeof(str2) * 20);
	str1 = "pif paf pouf";
	ft_strcpy(str2, str1);
	if (!strcmp(str1, str2))
		return (1);
	return (0);
}

int	t_ft_strncpy(void)
{
	ft_putstr("  ft_strncpy		|	");
	char    *str1;
	char    *str2;
	str1 = malloc(sizeof(str1) * 20);
	str2 = malloc(sizeof(str2) * 20);
	str1 = "pif paf pouf";
	ft_strncpy(str2, str1, 3);
	if (!strcmp(str2, "pif"))
		return (1);
	return (0);
}

int	main(void)
{
	char	*str;
	str = malloc(sizeof(str) * 100);

	ft_putstr("--------------------------------------------------\n");
	ft_putchar('T');
	ft_putstr("esting your ftlib :\n");
	ft_putnbr(52);
	ft_putstr(" functions\n");
	ft_putstr("--------------------------------------------------\n");
	
	ft_show_result(t_ft_atoi());
	ft_show_result(t_ft_strlen());
	ft_show_result(t_ft_strcmp());
	ft_show_result(t_ft_strdup());
	ft_show_result(t_ft_strcpy());
	ft_show_result(t_ft_strncpy());
	
	ft_putchar('\n');
	return (0);
}
