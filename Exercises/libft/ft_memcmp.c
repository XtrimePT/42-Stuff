/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 05:11:49 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/21 05:28:39 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (ptr[0] == '\0' && ptr2[0] == '\0')
		return (0);
	while (i < n)
	{
		if (ptr[i] == ptr2[i])
			i++;
		else if (ptr[i] < ptr2[i])
			return (-1);
		else
			return (1);
	}
	return (0);
}

/*
int main()
{
	char a[] = "";
	char b[] = "a";
	//printf("%d", memcmp(a, b, 5));
	printf("%d", ft_memcmp(a, b, 5));
	return 0;
}*/
