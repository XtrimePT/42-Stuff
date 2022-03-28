/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:01:30 by joacorre          #+#    #+#             */
/*   Updated: 2022/03/28 18:59:55 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    add_string(char **string, char const *s, int len, int ptr_index)
{
    int i;
    
    i = 0;
    while (i < len)
    {
        string[ptr_index][i] = s[i];
        i++;
    }
    string[ptr_index][i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char    **strings;
	char    *ptr;
	int     i;
	int     j;
	int     k;
	
	strings = &ptr;
	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
	    while (s[i] != c)
	    {
	        i++;
	        j++;
	    }
	    ptr = malloc(j + 1 * sizeof(char));
	    if (!ptr)
	        return (NULL);
        strings[k] = ptr;
        add_string(strings, s, j, k);
        i++;
        k++;
        j = 0;
	}
	return (strings);
}


int main()
{
	char **ptr = ft_split("Teste de Strings", ' ');
	printf("%s", ptr[0]);
	return (0);
}
