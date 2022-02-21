/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:34:10 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/21 00:57:17 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize > 0)
	{
		i = 0;
		while (i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
		i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
int main()
{
	char src[] = "abcdef";
	char dst[] = "123";
	int src_size = ft_strlcpy(dst, src, 4);
	printf("%d \n%s",src_size, dst);

	return 0;
}*/