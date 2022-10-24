/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfavre <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:08:12 by thfavre           #+#    #+#             */
/*   Updated: 2022/09/06 03:27:43 by thfavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n1;
	unsigned int	n2;

	n1 = 0;
	n2 = 0;
	while (*(dest + n1))
	{
		n1++;
	}
	while ((n1 + n2 < 7) && *(src + n2))// size ??
	{
		printf(" a ");
		*(dest + n1 + n2) = *(src + n2);
		printf(" b ");
		printf("->%c\n", *(dest+n1 + n2));
		n2++;
	}
	printf("it works");
	*(dest + n1 + n2) = '\0';
	return (n1 + n2);
}

int main(){
	char dst[] = "1234567";
	char src[] = "ABCDEFGHIJ";
	char buffer[15];
	strcpy(buffer, dst);
	ft_strlcat(dst, src, 15);

	//printf("%d, %s", ft_strlcat(dst, src, 15), dst);
}
