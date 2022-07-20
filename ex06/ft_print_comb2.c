/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:04:17 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/20 16:30:14 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int n)
{
	char	digit;

	digit = '0' + (n / 10);
	write(1, &digit, 1);
	digit = '0' + (n % 10);
	write(1, &digit, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_number(a);
			write(1, " ", 1);
			print_number(b);
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b ++;
		}
		a ++;
	}
}

int	main(void)
/*{
	ft_print_comb2();
	return (0);
}*/
