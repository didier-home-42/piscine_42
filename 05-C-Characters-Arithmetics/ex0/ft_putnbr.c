/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manager <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 04:58:39 by manager           #+#    #+#             */
/*   Updated: 2026/09/07 11:16:29 by manager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
/*
int	main(void)
{
	/* Résultat overflow qui a le même comportement que INT_MIN */
	ft_putnbr(2147483648);
	write(1, "\n", 1);
	/* Affichage de la valeur 3648 */
	ft_putnbr(3648);
	write(1, "\n", 1);
	/* Affichage de la valeur négative *83648 */
	ft_putnbr(-83648);
	write(1, "\n", 1);
	return (0);
}*/
