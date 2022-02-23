/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:01:56 by cchekov           #+#    #+#             */
/*   Updated: 2022/02/23 19:23:32 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

void shell(char *commandLine){
    char **commands;

    commands = ft_split(commandLine, ' ');
    // Parse command
    ft_printf("%s",commands[0]);
}