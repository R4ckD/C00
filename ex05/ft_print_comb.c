/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:12:06 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/17 23:36:44 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	_u;
	char	_d;
	char	_c;

	_u = '0';
	while (_u <= '7')
	{
		_d = _u + 1;
		while (_d <= '8')
		{
			_c = _d + 1;
			while (_c <= '9')
			{
				ft_print(_u, _d, _c);
				_c++;
			}
			_d++;
		}
		_u++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
