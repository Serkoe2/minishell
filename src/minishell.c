/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:01:56 by cchekov           #+#    #+#             */
/*   Updated: 2022/02/23 19:57:21 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

void shell(char *commandLine){
    char **command;
    int commandLen;

    command = ft_split(commandLine, ' ');
    commandLen = ft_strlen(command[0]);
    // Parse command
   
    if (!ft_strncmp(command[0], "echo", commandLen))
        echo_handler(command);
    else if (!ft_strncmp(command[0], "cd", commandLen))
        ft_printf("%s",command[0]);
    else if (!ft_strncmp(command[0], "pwd", commandLen))
        ft_printf("%s",command[0]);
    else if (!ft_strncmp(command[0], "export", commandLen))
        ft_printf("%s",command[0]);
    else if (!ft_strncmp(command[0], "unset", commandLen))
        ft_printf("%s",command[0]);
    else if (!ft_strncmp(command[0], "env", commandLen))
        ft_printf("%s",command[0]);
    else if (!ft_strncmp(command[0], "exit", commandLen))
        ft_printf("%s",command[0]);
    else
        ft_printf("Unknow command");
    
    return ;
}