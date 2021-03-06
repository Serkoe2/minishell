/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:43:19 by cchekov           #+#    #+#             */
/*   Updated: 2022/02/24 00:15:33 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

void pwd_handler(){
    char    *path;
    
    path = ft_calloc(256, sizeof(char));
    path = getcwd(path, 256);
    if (!path)
        return ;
    ft_printf("%s", path);
}