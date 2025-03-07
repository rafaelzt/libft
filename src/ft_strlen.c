/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:09:32 by rzamolo-          #+#    #+#             */
/*   Updated: 2025/03/07 14:46:00 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
    size_t	strlen(const char *s);
	
DESCRIPTION
    The strlen() function computes the length of the string s.  The strnlen() 
	function attempts to compute the length of s, but never scans beyond the 
	first maxlen bytes of s.

RETURN VALUES
    The strlen() function returns the number of characters that precede the 
	terminating NUL character.  The strnlen() function returns either the same 
	result as strlen() or maxlen, whichever is smaller.
*/
size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
