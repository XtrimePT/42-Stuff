/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 03:11:22 by joacorre          #+#    #+#             */
/*   Updated: 2022/03/13 13:52:00 by joacorre         ###   ########.fr       */
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
	return (NULL);
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
