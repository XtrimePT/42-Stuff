/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 04:34:12 by joacorre          #+#    #+#             */
/*   Updated: 2022/03/13 18:02:20 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0') && i < n)
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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