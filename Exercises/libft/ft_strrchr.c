/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 03:11:22 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/21 04:33:49 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*ptr;

	ptr = (char *)s;
	i = 0;
	while (ptr[i])
	{
		i++;
	}
	while (i)
	{
		if (ptr[i] == c)
			return (ptr + i);
		i--;
	}
	return ('\0');
}

/*
int main()
{
	char a[] = "abdcadef";
	char *ptr = ft_strrchr(a, 'a');
	//char *ptr = strchr(a, 'c');
	printf("%s", ptr);

	return 0;
}*/
