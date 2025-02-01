/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:05:09 by marvin            #+#    #+#             */
/*   Updated: 2025/01/31 21:05:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0') && i < n)
			i++;
	if (i != n)				
			return (s1[i] - s2[i]);
	else 
			return 0;
}

int main(void)
{
	char *s1 = "hello World";
	char *s2 = "hello Dorld";
	unsigned int n = 7; 

	printf("Comparison result(Custom): %d\n", ft_strncmp(s1, s2, n));
	printf("Comparison result(From Library): %d\n", strcmp(s1, s2));

	return (0);
}