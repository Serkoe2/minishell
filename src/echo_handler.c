/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:54:28 by cchekov           #+#    #+#             */
/*   Updated: 2022/02/23 23:24:34 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

char *get_var(char *arg){
	unsigned int		size;
	char				*name;
	char				*value;
	
	size = ft_strlen(arg);
	name = ft_calloc(size, sizeof(char));
	arg++;
	ft_strlcpy(name, arg, size);
	value = getenv(name);
	free(name);
	return (value);
}

void echo_handler(char **args){
    char	n_option;
	char	*buffer;
    int		i;
    
	i = 1;
	n_option = 0;
    if (!ft_strncmp(args[i], "-n", ft_strlen(args[0])))
	{
		n_option = 1;
		i++;
	}
	
    while (args[i]){
		if (args[i][0] == '$'){
			buffer = get_var(args[i++]);
			ft_printf("%s", buffer);
		} 
		else 
			ft_printf("%s", args[i++]);
		ft_putchar(' ');
	}
	if (!n_option)
		ft_putchar('\n');
}