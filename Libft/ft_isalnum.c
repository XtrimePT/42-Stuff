/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:06:12 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/20 15:01:08 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= 65 && arg <= 90)
		|| (arg >= 97 && arg <= 122)
		|| (arg >= 48 && arg <= 57))
		return (1);
	return (0);
}

/*
int main()
{
	char c = '-';
	printf("%d", ft_isalnum(c));
	return 0;
}
*/