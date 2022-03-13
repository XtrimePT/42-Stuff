/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 05:28:53 by joacorre          #+#    #+#             */
/*   Updated: 2022/03/13 17:16:35 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*need;

	hay = (char *)haystack;
	need = (char *)needle;
	if (need[0] == '\0')
		return (hay);
	i = 0;
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while ((need[j] == hay[i + j]) && (i + j) < len)
		{
			if (need[j + 1] == '\0')
				return (hay + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char a[] = "lorem ipsum dolor sit amet";
	char b[] = "dolor";
	char *ptr = ft_strnstr(a, b, 15);
	printf("%s", ptr);
	return 0;
}*/