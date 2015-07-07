/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 15:55:00 by nsavry            #+#    #+#             */
/*   Updated: 2013/12/22 16:09:11 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchari(char c);
int		ft_putstri(char *str);
int		ft_putnbri(int i);
int		ft_putnbrui(unsigned int i);
int		ft_putnbroi(unsigned int i);
int		ft_putnbrxi(unsigned int i);
int		ft_putnbrmxi(unsigned int i);
int		ft_putpti(long unsigned int i);

#endif /*!LIBFTPRINTF_H*/
