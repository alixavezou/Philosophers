/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:04:12 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/31 18:39:18 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_philo philo;
	
	if (ac != 5 || ac != 6) //on a 4 args surs + 1 optionnel dc au min 5 au max 6
	{
		printf("Wrong number of args!\n");
		exit(1);
	}
	ft_initialize_values(&philo, av);
	ft_allocate_dining_room(&philo);
	free(philo.dining_room);
	return (0);
}