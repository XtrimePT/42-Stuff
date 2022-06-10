/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft _isprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:17:44 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/20 15:01:04 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	if ((arg >= 32 && arg <= 126))
		return (1);
	return (0);
}

/*
int main()
{
	char c = 'f';
	printf("%d", ft_isprint(c));
	return 0;
}
*/