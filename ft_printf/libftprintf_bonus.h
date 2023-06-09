/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_bonus.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpavon-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:24:15 by dpavon-g          #+#    #+#             */
/*   Updated: 2021/07/30 15:24:17 by dpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_BONUS_H
# define LIBFTPRINTF_BONUS_H

# define TYPES "cspdiuxX%"
# define EXTRA ".0*-"

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_printfStruct
{
	int	zero;
	int	width;
	int	precision;
	int	less;
	int	haveSpace;
	int	haveFlag;
}	t_printf;
int		ft_travel(va_list ap, const char *str);
int		ft_printf(const char *str, ...);
void	show_string(int *length, char *string);
int		ft_lenFinal(unsigned long num, int base);
char	*ft_transform_number(unsigned long num, int type, int base);
int		str_spaces2(int *length, t_printf *content, char *str, int len);
int		str_spaces(int *length, t_printf *content, char *str);
void	final_number(int *length, t_printf *content, char *str);
void	show_number(int *length, int num, t_printf *content);
void	digits(int *length, va_list ap, t_printf *content);
void	show_space(t_printf *content, int *length, int len);
void	characters(int *length, va_list ap, t_printf *content);
void	string_space(int *length, t_printf *content, char *str);
void	string_precision(int *length, t_printf *content, char *str);
void	string(int *length, va_list ap, t_printf *content);
void	unsig_num(int *length, va_list ap, t_printf *content);
void	hexadecimal(int *length, va_list ap, t_printf *content, char type);
void	pointer(int *length, va_list ap, t_printf *content);
void	specify_type(const char s, t_printf *content, va_list ap, int *length);
int		point(const char *str, t_printf *content, va_list ap);
int		width(const char *str, t_printf *content);
void	apostro(t_printf *content, va_list ap);
int		specify_flag(const char *str, int *leng, t_printf *content, va_list ap);
int		specify(const char *str, int *length, va_list ap);
int		travel(va_list ap, const char *str);
int		ft_printf(const char *str, ...);
#endif
