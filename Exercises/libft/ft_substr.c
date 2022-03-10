/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:54:51 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/28 23:54:51 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	substr = malloc((len + 1) * sizeof(char));
	if (!substr || ft_strlen(s) < start)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int main()
{
	char a[] = "abcdef";
	char *ptr = ft_substr(a, 2, 1);
	printf("%s", ptr);
}
*/