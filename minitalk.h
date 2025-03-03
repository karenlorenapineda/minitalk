/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:15:30 by kpineda-          #+#    #+#             */
/*   Updated: 2025/03/03 22:41:41 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include "./libft/libft.h"
# include <signal.h>
# include <unistd.h>

# ifndef USAGE
#  define USAGE "Usage: ./client [server_pid] [message]\n"
# endif // USAGE

void	send_message(int pid, char *message);
char	*ft_itoa_bin(unsigned int n);
char	*str_bin(const char *str);
void	*ft_free(void *ptr);
void	ft_printerror(char *error_msg);
void	allocate_check(void *ptr);
int		check_byte(int *bit_index);
void	length_byte(char current_byte, size_t *lenght);
void	bit_set(int signal, char *current_byte, int *bit_index);

// Server.c

size_t	receive_length(int signal);
void	receive_message(int signal, char **buffer, size_t message_len,
			int *state);
void	signal_handler(int signal, siginfo_t *info, void *context);

#endif // MINITALK_H
