/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:38:31 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/06 11:46:22 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int		is_power_of_2(unsigned int n)
// {
// 	if (n == 0)
// 		return (0);
// 	while (n % 2 == 0)
// 	{
// 		n /= 2;
// 	}
// 	return ((n == 1) ? 1 : 0);
// }


// правильная версия снизу
int		is_power_of_2(unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	if (n == 2)
		return (1);
	while (i < n)
	{
		if ((i * i) == n)
			break ;
		i++;
	}
	if ((i * i) == n)
		return (1);
	else
		return (0);
}

int		main()
{
	int i = 25;

	printf("%d\n", is_power_of_2(i));
	return (0);
}
