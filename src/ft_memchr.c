/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:07:14 by rzamolo-          #+#    #+#             */
/*   Updated: 2025/03/07 14:47:06 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
	void	*memchr(const void *s, int c, size_t n);

DESCRIPTION
    The memchr() function locates the first occurrence of c (converted to an 
	unsigned char) in string s.
	
RETURN VALUES
    The memchr() function returns a pointer to the byte located, or NULL if no 
	such byte exists within n bytes.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	aux;

	aux = 0;
	while (aux < n)
	{
		if (((unsigned char *)s)[aux] == (unsigned char)c)
		{
			return ((unsigned char *)(s + aux));
		}
		aux++;
	}
	return (0);
}
