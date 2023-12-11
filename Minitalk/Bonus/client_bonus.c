/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:11:15 by ojebbari          #+#    #+#             */
/*   Updated: 2023/04/19 22:44:37 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static void	mbc(int sig)
{
	static int	recv;

	if (sig == SIGUSR1)
		++recv;
	else
	{
		ft_putnbr_fd(recv, 1);
		ft_putchar_fd('\n', 1);
		exit(0);
	}
}

static void	hak(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str;
		while (i-- > 0)
		{
			if ((c >> i) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(300);
		}
		usleep(1800);
		str++;
	}
	i = 8;
	while (i-- > 0)
	{
		kill(pid, SIGUSR1);
		usleep(750);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_printf("\e[31m## SYNTAX GHALET ##\n\e[0m");
		ft_printf("\e[92m ==> ./client <server PID> <string>\n\e[0m");
		exit(EXIT_FAILURE);
	}
	else if (kill(ft_atoi(argv[1]), 0) == -1)
	{
		ft_printf("\e[31m## PID masale7sh ##\n\e[0m");
		exit(EXIT_FAILURE);
	}
	if (!ft_strlen (argv[2]))
	{
		ft_printf("\e[31m## string khawi ##\n\e[0m");
		return (1);
	}
	ft_printf("Sent        : %d\nReceived    : ", ft_strlen(argv[2]));
	signal(SIGUSR1, mbc);
	signal(SIGUSR2, mbc);
	hak(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (1);
}
