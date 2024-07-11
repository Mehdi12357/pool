/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmehdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:00:10 by melmehdi          #+#    #+#             */
/*   Updated: 2023/08/21 15:00:31 by melmehdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	n;
	unsigned int	j;

	n = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size > 0)
	{
		while (src[n] != '\0' && n < size - 1)
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (j);
}
