/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 05:50:24 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/21 06:46:46 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_number(int numero, char *ptr, int *i, int sinal)
{
	if (ptr[*i] >= '0' && ptr[*i] <= '9')
	{
		while (ptr[*i] >= '0' && ptr[*i] <= '9')
		{
			numero = numero * 10 + (ptr[*i] - 48);
			*i += 1;
		}
		return (numero * sinal);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	char	*ptr;
	int		sinal;
	int		numero;

	ptr = (char *)str;
	i = 0;
	while ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == 32)
		i++;
	sinal = 1;
	if (ptr[i] == '+' || ptr[i] == '-')
	{
		if (ptr[i] == '-')
			sinal = sinal * -1;
		if (!(ptr[i + 1] >= '0' && ptr[i + 1] <= '9'))
			return (0);
	}
	numero = 0;
	return (get_number(numero, ptr, &i, sinal));
}

/*
int main()
{
	char a[] = "  -1aaa23asd";
	//printf("%d", ft_atoi(a));
	printf("%d", ft_atoi(a));
	return 0;
}*/