/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:26:23 by teiffe            #+#    #+#             */
/*   Updated: 2021/09/10 14:26:37 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	number;
	int	*pnumber;

	number = 10;
	pnumber = &number;
	printf("The address of the pointer is: %p\n", pnumber);
	printf("The value of the pointer is: %d\n", *pnumber);
	printf("The value of the int is: %d\n", number);
}
