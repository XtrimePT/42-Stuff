/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:58:46 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/21 04:16:47 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	dst_cat_start;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	dst_cat_start = dst_len;
	while (src[i] != '\0')
	{
		if (dst_cat_start >= dstsize - 1)
			break ;
		dst[dst_cat_start] = src[i];
		dst_cat_start++;
		i++;
	}
	dst[dst_cat_start] = '\0';
	return (dstsize + src_len);
}

/*
int main()
{
	char src[] = "abcdef";
	char dst[] = "123";
	int cat_size = ft_strlcat(dst, src, 5);
	printf("%d \n%s",cat_size, dst);

	return 0;
}*/