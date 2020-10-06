/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmai.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:44:32 by hyshin            #+#    #+#             */
/*   Updated: 2020/10/06 14:44:32 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char digit;
	
	digit = '0';
	while (digit <= '9')
	{
		write(1, &digit, 1);
		digit++;
	}
}
