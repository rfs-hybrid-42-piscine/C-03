/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:49:44 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/24 04:58:51 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn char *ft_strcat(char *dest, char *src)
 * @brief Concatenates two strings.
 * @details Appends the src string to the dest string, overwriting the
 * terminating null byte ('\0') at the end of dest, and then safely adds a new
 * terminating null byte to the resulting string.
 * @param dest The destination buffer.
 * @param src The source string to be appended.
 * @return A pointer to the resulting destination string (dest).
 */
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
