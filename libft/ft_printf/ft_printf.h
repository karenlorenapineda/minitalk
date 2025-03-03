/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:30:57 by kpineda-          #+#    #+#             */
/*   Updated: 2025/03/03 20:30:43 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

size_t	ft_strlen_(const char *s);
int		ft_ptrlen(unsigned long ptr);
int		ft_print_chr(int chr);
int		ft_print_str(char *str);
int		ft_print_unum(unsigned int unum);
int		ft_print_num(int num);
int		ft_print_hexnum(unsigned int unum, int menor);
int		ft_print_ptr(unsigned long ptr);
int		ft_printf(const char *format, ...);

#endif