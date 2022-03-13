/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 05:03:30 by joacorre          #+#    #+#             */
/*   Updated: 2022/03/13 13:50:50 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (ptr[i] != '\0' && i < n)
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char a[] = "abcdef";
	char *ptr = ft_memchr(a, 'z', 3);
	printf("%s", ptr);
	//printf("%d", ft_strncmp(a, b, 2));
	return 0;
}*/