/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:04:01 by joacorre          #+#    #+#             */
/*   Updated: 2022/04/21 23:04:01 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char    ft(unsigned int a, char c)
{
    a = a;
    return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *ptr;
    
    i = 0;
    if (!(ptr = malloc(ft_strlen(s) + 1 * sizeof(char))))
        return (NULL);
    while (s[i] != '\0')
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

/*int main()
{
    char a[] = "abcd";
    char (*f)(unsigned int, char);
    f = &ft;
    char *ptr = ft_strmapi(a, f);
    printf("%s", ptr);
    
    return (0);
}*/