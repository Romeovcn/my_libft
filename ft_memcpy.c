/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvincent <rvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:20:21 by rvincent          #+#    #+#             */
/*   Updated: 2022/05/11 12:01:40 by rvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	while (size)
	{
		*(char *)destination = *(char *)source;
		destination++;
		source++;
		size--;
	}
	return (destination);
}

// int	main(void)
// {
// 	char str[11] = "0123456789";
// 	char dest[11];
// 	ft_memcpy(dest, str, 11);
// 	printf("%s", dest);
// }