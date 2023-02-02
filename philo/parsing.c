/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:40:26 by aavezou           #+#    #+#             */
/*   Updated: 2023/02/01 18:14:22 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

//je cree un tableau qui aura comme taille le nombre de philo
//il faut qu'il y ait assez de chaises pour chaque philo dc 1 case par philo
int	ft_allocate_dining_room(t_general *general)
{
	int	dining_room;

	dining_room = (int *)malloc((general->number_of_philosophers) * sizeof(int));
	if (!dining_room)
	{
		return (1);
	}
	return (0);
}

//je cree un tableau pour les forks qui seront = au nb de philo présents
int	ft_allocate_forks_tab(t_general *general)
{
	general->forks = malloc(sizeof(pthread_mutex_t) * general->number_of_philosophers);
	if (!general->forks)
	{
		return (1);
	}
	return (0);
}
