/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalvez <vicalvez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:26:40 by vicalvez          #+#    #+#             */
/*   Updated: 2023/12/19 11:27:40 by vicalvez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <stdarg.h>

typedef struct s_format
{
	char	type;
}	t_format;

typedef struct s_arg
{
	char		*arg;
	char		*flags;
	int			arg_len;
	t_format	*format;
}	t_arg;

int			ft_printf(const char *s, ...);
int			ft_has_flag(char *flags, char c);
int			ft_get_fmw(char *flags, char type);
int			ft_hex_len(unsigned long long ptr);
int			fill_fmw(int len, int fmw, char *flags);
int			ft_print_char(char c, char *flags);
int			ft_print_str(char *s, char *flags);
int			ft_print_str_two(char *s, char *flags);
int			ft_print_pointer(unsigned long long ptr, char *flags);
int			ft_print_unsigned_int(unsigned int n, char *flags);
int			ft_print_decimal(int i, char *flags);
int			ft_print_hex(unsigned int hex, char *flags, char type);
int			ft_print_arg(va_list args, t_arg *arg);
int			ft_print_global(va_list args, t_list *format_args, const char *s);
int			ft_absolute(int i);
void		print_hex(unsigned long long ptr, char type);
void		ft_add_format(t_list **formats, char type);
void		ft_free_args(void *arg);
void		ft_free_formats(void *v);
void		ft_printnbr(long n);
t_format	*ft_get_format_type(t_list *formats, char c);
t_list		*get_formats(void);

#endif