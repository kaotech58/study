/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointerbasics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:26:23 by teiffe            #+#    #+#             */
/*   Updated: 2021/09/10 15:52:21 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	number;
	int	*pnumber;

	number = 150;
	pnumber = &number;
	printf("The address of pnumber is: %p\n", pnumber);
	printf("The address of number is: %p\n", &pnumber);
	printf("The value of pnumber is: %d\n", *pnumber);
	printf("The value of number is: %d\n", number);
	return (0);
}
