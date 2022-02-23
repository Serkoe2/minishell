/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:54:28 by cchekov           #+#    #+#             */
/*   Updated: 2022/02/23 20:09:03 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

void echo_handler(char **args){
    char	n_option;
    int		i;
    
	i = 1;
	n_option = 0;
    if (!ft_strncmp(args[i], "-n", ft_strlen(args[0])))
	{
		n_option = 1;
		i++;
	}

    while (args[i])
		ft_printf("%s", args[i++]);
	if (!n_option)
		ft_putchar('\n');
}