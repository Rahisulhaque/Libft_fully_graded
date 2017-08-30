/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 17:48:04 by rhaque            #+#    #+#             */
/*   Updated: 2017/07/01 17:48:07 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int k;

	i = 0;
	if (little[0] == '\0')
		return (char*)(big);
	while (big[i] != '\0')
	{
		k = 0;
		while (big[i + k] == little[k] && little[k] != '\0')
			k++;
		if (little[k] == '\0')
			return (char*)(big + i);
		i++;
	}
	return (NULL);
}
