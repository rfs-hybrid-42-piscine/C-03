/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:41:32 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/24 04:59:35 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
 * @brief Size-bounded string concatenation.
 * @details Appends string src to the end of dest. It will append at most
 * size - strlen(dest) - 1 characters. It will then NUL-terminate, unless
 * size is 0 or the original dest string was longer than size. Includes strict
 * protections against NULL pointer buffer sizes.
 * @param dest  Destination buffer.
 * @param src  Source string.
 * @param size Total size of the destination buffer.
 * @return The total length of the string it tried to create.
 */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (!dest && size == 0)
		return (src_len);
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
