/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:52:42 by aavezou           #+#    #+#             */
/*   Updated: 2023/02/01 18:50:55 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_initialize_values(t_general *general, char **av)
{
	general->number_of_philosophers = ft_atoi(av[1]);
	general->time_to_die = ft_atoi(av[2]);
	general->time_to_eat = ft_atoi(av[3]);
	general->time_to_sleep = ft_atoi(av[4]);
	if (av[5])
	{
		general->number_of_philosophers_must_eat = ft_atoi(av[5]);
	}
}
//dabord j'assigne mes args comme le sujet l'a demande et je les transforme en int

int		ft_init_philo(t_philo *philo, t_general *general)
{
	int	i;
	int	philo;

	i = 0;
	while (i < general->number_of_philosophers)
	{
		philo->id_philo = i;
		i++;
	}
	return (0);
}
