/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ke_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kehuang <kehuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:57:08 by kehuang           #+#    #+#             */
/*   Updated: 2018/06/23 16:28:01 by kehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KE_GET_NEXT_LINE_H
# define KE_GET_NEXT_LINE_H
# define GNL_BUFF_SIZE 3000
# define GNL_OPEN_MAX 10
# define X '\n'

int		ke_get_next_line(const int fd, char **line, char **noleaks);
#endif
