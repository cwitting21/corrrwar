/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_close.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaykit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 00:12:13 by wmaykit           #+#    #+#             */
/*   Updated: 2020/01/26 14:11:41 by wmaykit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void	file_close(t_file *m_file)
{
	close(m_file->fd);
	m_file->open = False;
	m_file->fd = 0;
}