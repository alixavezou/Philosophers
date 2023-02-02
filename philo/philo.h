/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:48:39 by aavezou           #+#    #+#             */
/*   Updated: 2023/02/01 18:49:39 by alixavezou       ###   ########.fr       */
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
# include <pthread.h>

typedef struct s_general t_general;
struct	s_general
{
	//si 1 philo n'a pas commence a manger time_to_die msc
	//apres le debut de son precedent repas ou depuis le debut de sa simulation alors il meurt
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_philosophers_must_eat;

	pthread_mutex_t	*forks;
};

typedef struct s_philo t_philo;
struct	s_philo
{
	int	id_philo;

};

// Define values
# define INT_MAX 2147483647
# define INT_MIN -2147483648

int		ft_atoi(const char *str);
int		ft_allocate_dining_room(t_general *general);
int		ft_allocate_forks_tab(t_general *general);
int		ft_init_philo(t_philo *philo, t_general *general);

void	ft_initialize_values(t_general *general, char **av);

#endif
