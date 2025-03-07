/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:58:42 by rzamolo-          #+#    #+#             */
/*   Updated: 2025/03/07 14:46:50 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
void	*memset(void *b, int c, size_t len);

DESCRIPTION
    The memset() function writes len bytes of value c (converted to an unsigned 
	char) to the string b.
	
RETURN VALUES
    The memset() function returns its first argument.
	
COMMENTS
	Cast 'b' from VOID to UNSIGNED CHAR and aso 'c'.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	counter;

	counter = 0;
	while (counter < len)
	{
		((unsigned char *)b)[counter] = (unsigned char)c;
		counter++;
	}
	return (b);
}
