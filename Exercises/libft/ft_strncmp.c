/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 04:34:12 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/21 05:03:02 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	ptr = (char *)s1;
	ptr2 = (char *)s2;
	i = 0;
	while ((ptr[i] != '\0' || ptr2[i] != '\0') && i < n)
	{
		if (ptr[i] == ptr2[i])
			i++;
		else
			return (ptr[i] - ptr2[i]);
	}
	return (0);
}

/*
int main()
{
	char a[] = "aba";
	char b[] = "abc";
	//printf("%d", strncmp(a, b, 2));
	printf("%d", ft_strncmp(a, b, 2));
	return 0;
}*/