/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 05:03:30 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/21 05:11:15 by joacorre         ###   ########.fr       */
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
	}
	return ('\0');
}

/*
int main()
{
	char a[] = "abcdef";
	char *ptr = memchr(a, 'c', 3);
	printf("%s", ptr);
	//printf("%d", ft_strncmp(a, b, 2));
	return 0;
}*/