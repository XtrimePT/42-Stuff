/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 00:34:03 by joacorre          #+#    #+#             */
/*   Updated: 2022/04/27 00:34:03 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void    f(unsigned int i, char* s)
{
    s[i]++;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int main()
{
    char a[] = "abcd";
    void (*f)(unsigned int, char*);
    f = &ft;
    ft_striteri(a, f);
    printf("%s", a);
    return (0);
}*/