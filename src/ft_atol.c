/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:59:44 by rzamolo-          #+#    #+#             */
/*   Updated: 2025/03/08 13:06:13 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

long	ft_atol(const char *pnbr)
{
	int		sign;
	long	nbr;

	sign = 1;
	nbr = 0;
	while (ft_isspace(*pnbr))
		++pnbr;
	while (*pnbr == '-' || *pnbr == '+')
	{
		if (*(pnbr++) == '-')
			sign *= -1;
		++pnbr;
	}
	while (ft_isdigit(*pnbr))
	{
		nbr *= 10;
		nbr += *pnbr - '0';
		++pnbr;
	}
	return (sign * nbr);
}