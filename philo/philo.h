/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:48:39 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/31 18:34:35 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
# include <ctype.h>

typedef struct s_philo t_philo;
struct	s_philo
{
	//si 1 philo n'a pas commence a manger time_to_die msc 
   //apres le debut de son precedent repas ou depuis le debut de sa simulation alors il meurt
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	right_fork;
	int	left_fork;
	int dining_room;
};

// Define values
# define INT_MAX 2147483647
# define INT_MIN -2147483648

int		ft_atoi(const char *str);
int		ft_allocate_dining_room(t_philo *philo);

void	ft_initialize_values(t_philo *philo, char **av);

#endif