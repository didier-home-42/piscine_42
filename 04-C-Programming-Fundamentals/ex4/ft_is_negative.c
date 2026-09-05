/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manager <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 23:38:15 by manager           #+#    #+#             */
/*   Updated: 2026/09/06 00:15:31 by manager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N\n", 2);
	else
		write(1, "P\n", 2);
}

/* === Test d'affichage === 

int	main(void)
{
	ft_is_negative(55);
	ft_is_negative(-10);
	return (0);
}*/
