/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 23:53:58 by joacorre          #+#    #+#             */
/*   Updated: 2022/03/28 16:58:24 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t    ft_strlen(const char *str)
{
    size_t    i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}*/

static int	start_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
			continue ;
		}
		j++;
	}
	return (i);
}

static int	end_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (i >= 0 && set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
			continue ;
		}
		j++;
	}
	if (i < 0)
	i = 0;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	if (!s1 || !set)
		return (NULL);
	i = start_index(s1, set);
	j = end_index(s1, set);
	if (s1[i] == '\0')
		str = malloc(1 * sizeof(char));
	else
		str = malloc((j - i) + 2 * sizeof(char));
	if (!str)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

/*int main()
{
    char a[] = "          ";
    char set[] = " ";
    char *ptr = ft_strtrim(a, set);
    printf("%s", ptr);
    return (0);
}*/
