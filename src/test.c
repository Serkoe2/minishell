/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:17:28 by cchekov           #+#    #+#             */
/*   Updated: 2022/03/02 01:28:35 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"


int main(int argc, char **argv){
    char	*line;

    while (1)
    {
        line = readline("cchekov > ");
		if (!*line)
			continue ;
		shell(line);
		ft_printf("\n");
    }
    //shell("pwd");
    return (0);
}