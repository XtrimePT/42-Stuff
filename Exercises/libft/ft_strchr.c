/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 02:39:29 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/21 04:20:09 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (c == ptr[i])
			return (ptr + i);
		i++;
	}
	return ('\0');
}

/*
int main()
{
    char a[] = "abdcdef";
    char *ptr = ft_strchr(a, 'd');
    //char *ptr = strchr(a, 'c');
    printf("%s", ptr);

    return 0;
}*/