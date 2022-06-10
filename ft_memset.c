/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:34:03 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/20 15:10:03 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	c2;

	ptr = (unsigned char *)b;
	c2 = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = c2;
		i++;
	}
	return (b);
}

/*
int main()
{
    char a[] = "abcef";
    ft_memset(a, 'b', 3);
    printf("%s", a);
}
*/
