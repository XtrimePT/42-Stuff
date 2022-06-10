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

static int	words_num(char const *s, char c)
{
	int	words_num;
	int	i;

	i = 0;
	words_num = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words_num++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (words_num);
}

static char	*strings_populate(char *strings, char const *s, char c, int *i)
{
	int	j;
	int	k;

	j = *i;
	k = 0;
	while (s[*i] != '\0')
	{
		if (s[*i] != c)
		{
			while (s[*i] != c && s[*i] != '\0')
				*i = *i + 1;
			strings = malloc((*i - j) + 1 * sizeof(char));
			while (j < *i)
			{
				strings[k] = s[j];
				k++;
				j++;
			}
			break ;
		}
		*i = *i + 1;
		j++;
	}
	strings[k] = '\0';
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		words;
	int		i;
	int		s_index;

	if (!s)
		return (NULL);
	words = words_num(s, c);
	strings = malloc((words + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	s_index = 0;
	while (i < words)
	{
		strings[i] = strings_populate(strings[i], s, c, &s_index);
		i++;
	}
	strings[words] = NULL;
	return (strings);
}

/*int main()
{
	int i = 0;
	char a[] = "Uma String Bonita";
	char **ptr;
	ptr = ft_split(a, ' ');
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	printf("%s", ptr[i]);
	return 0;
}*/
