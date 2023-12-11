/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:11:19 by ojebbari          #+#    #+#             */
/*   Updated: 2023/04/19 22:58:32 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static void	passage(pid_t *c_pid, pid_t new_pid, unsigned char *c, int *i)
{
	*c_pid = new_pid;
	*c = 0;
	*i = 0;
}

static void	handler(int sig, siginfo_t *info, void *cont)
{
	static unsigned char		c;
	static pid_t				c_pid;
	static int					i;

	(void)cont;
	if (c_pid != info->si_pid)
		passage (&c_pid, info->si_pid, &c, &i);
	c = c | (sig == SIGUSR2);
	if (++i == 8)
	{
		i = 0;
		if (!c)
		{
			kill(c_pid, SIGUSR2);
			c_pid = 0;
			return ;
		}
		ft_printf("%c", c);
		c = 0;
		kill(c_pid, SIGUSR1);
	}
	else
		c <<= 1;
}

int	main(void)
{
	struct sigaction	hadeek;

	sigemptyset(&hadeek.sa_mask);
	ft_printf("Server PID = %d\n", getpid());
	hadeek.sa_sigaction = handler;
	hadeek.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &hadeek, 0);
	sigaction(SIGUSR2, &hadeek, 0);
	while (1)
		pause();
	return (0);
}
