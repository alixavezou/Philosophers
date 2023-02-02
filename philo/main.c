/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:04:12 by aavezou           #+#    #+#             */
/*   Updated: 2023/02/01 18:07:51 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_general	general;
	t_philo		philo;

	if (ac != 5 || ac != 6) //on a 4 args surs + 1 optionnel dc au min 5 au max 6
	{
		printf("Wrong number of args!\n");
		exit(1);
	}
	ft_initialize_values(&general, av);
	ft_allocate_dining_room(&general);
	ft_allocate_forks_tab(&general);
	free(general.forks);
	return (0);
}
