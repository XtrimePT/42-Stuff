/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:01:30 by joacorre          #+#    #+#             */
/*   Updated: 2022/03/28 18:59:55 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    string_copy(char *dest, char *ori, int *ori_index, int finish, char *c)
{
	int i;
	
	i = 0;
	if (!(finish - 1 == 0 && ori[finish - 1] == *c))
	{
		while (*ori_index < finish)
		{
			dest[i] = ori[*ori_index];
			i++;
			*ori_index = *ori_index + 1;
		}
	}
	dest[i] = '\0';
}

void    chars_malloc(char **strings, char *s, char *c)
{
	int i;
	int j;
	int str_index;
	
	i = 0;
	j = 0;
	str_index = 0;
	while (s[j] != '\0')
	{
		if ((j == 0 && s[j] == *c) || s[j + 1] == *c || s[j + 1] == '\0')
		{
			if (j == 0 && s[j] == *c)
				strings[str_index] = malloc(1 * sizeof(char));
			else
				strings[str_index] = malloc((j - i) + 2 * sizeof(char));
			string_copy(strings[str_index], s, &i, j + 1, c);
			i++;
			str_index++;
		}
		j++;
	}
}

char    **ft_split(char *s, char c)
{
	char    **strings;
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
		}
		i++;
	}
	if (!(strings = malloc((count + 2) * sizeof(char *))))
		return (NULL);
	strings[count + 1] = NULL;
	chars_malloc(strings, s, &c);
	
	return (strings);
}

int main()
{
	char **strings;
	char a[] = "this is a string";
	strings = ft_split(a, ' ');

	int i = 0;
	
	while (strings[i])
	{
		printf ("%s\n", strings[i]);
		i++;
	}
	return 0;
}
