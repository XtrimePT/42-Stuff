/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:08:55 by joacorre          #+#    #+#             */
/*   Updated: 2022/03/10 23:08:55 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		set_len;

	set_len = ft_strlen(set);
	str = malloc((ft_strlen(s1) - (set_len * 2)) + 1 * sizeof(char));
	i = 0;
	j = set_len;
	while (s1[j + set_len] != '\0')
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
	char a[] = "AA42AA";
	char set[] = "AA";
	char *ptr = ft_strtrim(a, set);
	printf("%s", ptr);
	return (0);
}*/
