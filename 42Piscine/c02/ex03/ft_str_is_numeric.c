/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfavre <thfavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 04:31:46 by thfavre           #+#    #+#             */
/*   Updated: 2022/10/24 14:55:41 by thfavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str > '9' || *str < '0')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int main(){printf("%d\n", ft_str_is_numeric("0987 d 65431"));}
