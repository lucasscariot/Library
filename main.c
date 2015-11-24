/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:22:56 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/24 17:30:50 by lscariot         ###   ########.fr       */
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

int		t_ft_atoi(void)
{
	ft_putstr("  ft_atoi		|	");
	if (ft_atoi("876") == 876)
	{
		if (ft_atoi("gre") == 0)
			return (1);
	}
	return (0);
}

int		t_ft_strlen(void)
{
	ft_putstr("  ft_strlen		|	");
	if (ft_strlen("Ceci est une grosse phrase") == strlen("Ceci est une grosse phrase"))
		return (1);
	return (0);
}

int		t_ft_strcmp(void)
{
	ft_putstr("  ft_strcmp		|	");
	if (strcmp("Coucou", "Coucou") == ft_strcmp("Coucou", "Coucou"))
	{
		if (strcmp("", "") == ft_strcmp("", ""))
		{
			if (strcmp("", "Ce") == ft_strcmp("", "Ce"))
				return (1);
		}
	}
	return (0);
}

int		t_ft_strdup(void)
{
	char	*str;

	str = malloc(sizeof(char) * 20 + 1);
	str = "pif paf pouf";
	ft_putstr("  ft_strdup		|	");
	if (strcmp(str, ft_strdup(str)) == 0)
		return (1);
	return (0);
}

int		t_ft_strcpy(void)
{
	char	*str1;
	char	*str2;

	ft_putstr("  ft_strcpy		|	");
	str1 = malloc(sizeof(str1) * 20);
	str2 = malloc(sizeof(str2) * 20);
	str1 = "pif paf pouf";
	ft_strcpy(str2, str1);
	if (!strcmp(str1, str2))
		return (1);
	return (0);
}

int		t_ft_strncpy(void)
{
	char	*str1;
	char	*str2;

	ft_putstr("  ft_strncpy		|	");
	str1 = malloc(sizeof(str1) * 20);
	str2 = malloc(sizeof(str2) * 20);
	str1 = "pif paf pouf";
	ft_strncpy(str2, str1, 3);
	if (!strcmp(str2, "pif"))
		return (1);
	return (0);
}

int		t_ft_strchr(void)
{
	ft_putstr("  ft_strchr		|	");
	if (!ft_strcmp(ft_strchr("Hier j'ai vu un zebre", 'z'), "zebre"))
		return (1);
	return (0);
}

int		t_ft_strrchr(void)
{
	ft_putstr("  ft_strrchr		|	");
	if (!ft_strcmp(ft_strrchr("z z z z z z z z z z z z z zebre", 'z'), "zebre"))
		return (1);
	return (0);
}

int		t_ft_strstr(void)
{
	ft_putstr("  ft_strstr		|	");
	if (!strcmp(ft_strstr("Une aiguille dans une meule de foin", "aiguille"), strstr("Une aiguille dans une meule de foin", "aiguille")))
		return (1);
	return (0);
}

int		t_ft_strnstr(void)
{
	ft_putstr("  ft_strnstr		|	");
	if (!strcmp(ft_strnstr("Une aiguille dans une meule de foin", "aiguille", '3'), strnstr("Une aiguille dans une meule de foin", "aiguille", '3')))
		return (1);
	return (0);
}

int		t_ft_strcat(void)
{
	char src[50];
	char dest[50];

	ft_putstr("  ft_strcat		|	");
	strcpy(src, "Cou");
	strcpy(dest, "cou");
	if (ft_strcat(dest, src), "Coucou")
		return (1);
	return (0);
}

int		t_ft_strncat(void)
{
	char	src[50];
	char	dest[50];

	ft_putstr("  ft_strncat		|	");
	strcpy(src, "Cou");
	strcpy(dest, "couccoucoucoucou");
	if (strcmp(ft_strncat(dest, src, 3), "Coucou"))
		return (1);
	return (0);
}

int		t_ft_strlcat(void)
{
	ft_putstr("  ft_strlcat		|	");
	char src[50];
	char dest[50];

	strcpy(src, "Coucoucoucou");
	strcpy(dest, "cou");
	if (strcmp(ft_strncat(dest, src, 3), "Coucou"))
		return (1);
	return (0);
}

int		t_ft_isalnum(void)
{
	ft_putstr("  ft_isalnum		|	");
	if (ft_isalnum('B') && ft_isalnum('2') && !ft_isalnum('\0'))
		return (1);
	return (0);
}

int		t_ft_isalpha(void)
{
	ft_putstr("  ft_isalpha		|	");
	if (ft_isalpha('A') && ft_isalpha('Z') && !ft_isalpha('5'))
		return (1);
	return (0);
}

int		t_ft_isascii(void)
{
	ft_putstr("  ft_isascii		|	");
	if (ft_isascii(125) && !ft_isascii(1093) && ft_isascii('t'))
		return (1);
	return (0);
}

int		t_ft_isdigit(void)
{
	ft_putstr("  ft_isdigit		|	");
	if (ft_isdigit('9') && !ft_isdigit(984) && ft_isdigit('0'))
		return (1);
	return (0);
}

int		t_ft_isprint(void)
{
	ft_putstr("  ft_isprint		|	");
	if (ft_isprint('-') && ft_isprint (' ') && !ft_isprint('\0'))
		return (1);
	return (0);
}

int		t_ft_memset(void)
{
	ft_putstr("  ft_memset		|	");
	char	str[50];

	strcpy(str, "Bonjour bonjour");
	ft_memset(str, '$', 7);
	if (!strcmp(str, "$$$$$$$ bonjour"))
		return (1);
	return (0);
}

int		t_ft_bzero(void)
{
	ft_putstr("  ft_bzero		|	");
	char	str[50];

	strcpy(str, "Bonjour bonjour");
	ft_bzero(str, 7);
	if (!strcmp(str, "0000000 bonjour"))
		return (1);
	return (0);
}

int		t_ft_memcpy(void)
{
	char	src[50] = "Ceci est un test";
	char	dest[50];

	ft_putstr("  ft_memcpy		|	");
	ft_memcpy(dest, src, 50);
	if (!strcmp(src, dest))
		return (1);
	return (0);
}

int		t_ft_memccpy(void)
{
	char	src[50] = "Ceci est un test ~ TEST";
	char	dest[50];

	ft_putstr("  ft_memccpy		|	");
	ft_memccpy(dest, src, '~', 50);
	if (!strcmp(dest, "Ceci est un test ~"))
		return (1);
	return (0);
}

int		t_ft_memmove(void)
{
	char dest[] = "oldstring";
	char src[]  = "newstring";

	ft_putstr("  ft_memmove		|	");
	ft_memmove(dest, src, 9);
	if (!strcmp(dest, "newstring"))
		return (1);
	return (0);
}

int		t_ft_memchr(void)
{
	char str[] = "Ceci es un test";

	ft_putstr("  ft_memchr		|	");
	if (!strcmp(ft_memchr(str, 't', 50), "test"))
		return (1);
	return(0);
}

int		t_ft_memcmp(void)
{
	ft_putstr("  ft_memcmp		|	");
	char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "coucou", 6);
	memcpy(str2, "Coucou", 6);
	ret = memcmp(str1, str2, 5);
	if (ret == 32)
		return (1);
	return(0);
}


int		main(void)
{
	char	*str;

	str = malloc(sizeof(str) * 100);
	ft_putstr("--------------------------------------------------\n");
	ft_putstr("               ");
	ft_putchar('T');
	ft_putstr("esting your ftlib :\n");
	ft_putstr("                  ");
	ft_putnbr(52);
	ft_putstr(" functions\n");
	ft_putstr("--------------------------------------------------\n");
	ft_show_result(t_ft_atoi());
	ft_show_result(t_ft_strlen());
	ft_show_result(t_ft_strcmp());
	ft_show_result(t_ft_strdup());
	ft_show_result(t_ft_strcpy());
	ft_show_result(t_ft_strncpy());
	ft_show_result(t_ft_strchr());
	ft_show_result(t_ft_strrchr());
	ft_show_result(t_ft_strstr());
	ft_show_result(t_ft_strnstr());
	ft_show_result(t_ft_strcat());
	ft_show_result(t_ft_strncat());
	ft_show_result(t_ft_strlcat());
	ft_show_result(t_ft_isalnum());
	ft_show_result(t_ft_isalpha());
	ft_show_result(t_ft_isascii());
	ft_show_result(t_ft_isdigit());
	ft_show_result(t_ft_isprint());
	ft_show_result(t_ft_memset());
	ft_show_result(t_ft_bzero());
	ft_show_result(t_ft_memcpy());
	ft_show_result(t_ft_memccpy());
	ft_show_result(t_ft_memmove());
	ft_show_result(t_ft_memchr());
	ft_show_result(t_ft_memcmp());
	ft_putchar('\n');
	return (0);
}
