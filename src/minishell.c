/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:01:56 by cchekov           #+#    #+#             */
/*   Updated: 2022/02/23 19:47:33 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

void shell(char *commandLine){
    char **commands;
    int commandLen;

    commands = ft_split(commandLine, ' ');
    commandLen = ft_strlen(commands[0]);
    // Parse command
   
    if (!ft_strncmp(commands[0], "echo", commandLen))
        ft_printf("%s",commands[0]);
    else if (!ft_strncmp(commands[0], "cd", commandLen))
        ft_printf("%s",commands[0]);
    else if (!ft_strncmp(commands[0], "pwd", commandLen))
        ft_printf("%s",commands[0]);
    else if (!ft_strncmp(commands[0], "export", commandLen))
        ft_printf("%s",commands[0]);
    else if (!ft_strncmp(commands[0], "unset", commandLen))
        ft_printf("%s",commands[0]);
    else if (!ft_strncmp(commands[0], "env", commandLen))
        ft_printf("%s",commands[0]);
    else if (!ft_strncmp(commands[0], "exit", commandLen))
        ft_printf("%s",commands[0]);
    else
        ft_printf("Unknow command");
    
    return ;
}