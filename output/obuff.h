/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obuff.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 16:21:07 by asenat            #+#    #+#             */
/*   Updated: 2018/10/15 14:35:34 by asenat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OBUFF_H
# define FT_OBUFF_H

# include <stdlib.h>
# include <stdint.h>

# define LIBFT_OBUF_SIZE 128ul

# define LIBFT_FMT_HEX "0123456789abcdef"
# define LIBFT_FMT_OCT "012345678"

typedef struct	s_obuff
{
	char	buffer[LIBFT_OBUF_SIZE];
	size_t	cursor;
	int		fd;
}				t_obuff;

void			ft_flush_obuff(t_obuff *obuff);
void			ft_add_char_to_obuff(char s, t_obuff *obuff);
void			ft_add_str_to_obuff(char const *s, t_obuff *obuff);
void			ft_add_nstr_to_obuff(char const *s, size_t n, t_obuff *obuff);
void			ft_add_upper_str_to_obuff(char const *str, t_obuff *obuff);
void			ft_add_uint_base_to_obuff(uintmax_t nbr, const char *format,
											t_obuff *obuff);
void			ft_add_uint_to_obuff(uintmax_t nbr, t_obuff *obuff);
void			ft_add_int_to_obuff(int nbr, t_obuff *obuff);

#endif
