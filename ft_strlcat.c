/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:58:46 by joacorre          #+#    #+#             */
/*   Updated: 2022/03/13 16:27:40 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	j;

	dst_len = ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	if (dstsize < dst_len)
		return (dstsize + ft_strlen(src));
	return (dst_len + ft_strlen(src));
}

/*
int main()
{
	char src[] = "lorem ipsum dolor sit amet";
	char dst[10] = "a";
	int cat_size = ft_strlcat(dst, src, 0);
	printf("%d \n%s",cat_size, dst);

	return 0;
}
*/