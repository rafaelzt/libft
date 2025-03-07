/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:46:02 by rzamolo-          #+#    #+#             */
/*   Updated: 2025/03/07 18:19:17 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
	void ft_putchar_fd(char c, int fd);

DESCRIPTION
    Send the character 'c' to the given file descriptor 'fd'.
*/
int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
