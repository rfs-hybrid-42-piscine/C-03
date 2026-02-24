/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:06:12 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/24 04:59:04 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn char *ft_strncat(char *dest, char *src, unsigned int nb)
 * @brief Concatenates two strings with a strict size limit.
 * @details Appends at most 'nb' bytes from the src string to the dest string.
 * It manually appends the null-terminator at the end to ensure the buffer
 * remains a valid C string.
 * @param dest The destination buffer.
 * @param src The source string to be appended.
 * @param nb The maximum number of bytes to copy from src.
 * @return A pointer to the resulting destination string (dest).
 */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && nb > 0)
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}
