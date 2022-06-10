/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 23:22:52 by joacorre          #+#    #+#             */
/*   Updated: 2022/04/27 23:22:52 by joacorre         ###   ########.fr       */
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

void	ft_putendl_fd(char *s, int fd)
{
	int	nbytes;

	nbytes = ft_strlen(s);
	write(fd, s, nbytes);
	write(fd, "\n", 1);
}

/*int main()
{
    ft_putendl_fd("abcd", 1);

    return 0;
}*/