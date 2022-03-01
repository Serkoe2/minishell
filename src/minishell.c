/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:01:56 by cchekov           #+#    #+#             */
/*   Updated: 2022/03/02 01:45:54 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

void shell(char *commandLine){
    char			**line;
    char			*command;
    unsigned int	commandLen;

    line = ft_split(commandLine, ' ');
    command = line[0];
    commandLen = ft_strlen(command);
    //ft_printf("%s", command);
    // Parse command
   
    if (!ft_strncmp(command, "echo", commandLen))
        echo_handler(line);
    else if (!ft_strncmp(command, "cd", commandLen))
        ft_printf("%s",command);
    else if (!ft_strncmp(command, "pwd", commandLen))
        pwd_handler();
    else if (!ft_strncmp(command, "export", commandLen))
        ft_printf("%s",command);
    else if (!ft_strncmp(command, "unset", commandLen))
        ft_printf("%s",command);
    else if (!ft_strncmp(command, "env", commandLen))
        ft_printf("%s",command);
    else if (!ft_strncmp(command, "exit", commandLen))
        ft_printf("%s",command);
    else
        ft_printf("Unknow command");
    
    return ;
}

// Здесь должна быть функция для сравнения строк