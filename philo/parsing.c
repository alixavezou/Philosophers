/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:40:26 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/31 18:34:22 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

//je cree un tableau qui aura comme taille le nombre de philo 
//il faut qu'il y ait assez de chaises pour chaque philo dc 1 case par philo
int ft_allocate_dining_room(t_philo *philo)
{
    philo->dining_room = (int *)malloc((philo->number_of_philosophers) * sizeof(int));
    if (!philo->dining_room)
    {
        return (1);
    }
    return (0);
}