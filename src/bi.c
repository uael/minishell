/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <alucas-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:30 by alucas-           #+#    #+#             */
/*   Updated: 2017/11/23 11:58:54 by null             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msh/bi.h"

inline t_cmd	sh_bi(char *exe)
{
	if (ft_strcmp("cd", exe) == 0)
		return (sh_bi_cd);
	if (ft_strcmp("echo", exe) == 0)
		return (sh_bi_echo);
	if (ft_strcmp("env", exe) == 0)
		return (sh_bi_env);
	if (ft_strcmp("exit", exe) == 0)
		return (sh_bi_exit);
	if (ft_strcmp("setenv", exe) == 0 || ft_strcmp("export", exe) == 0)
		return (sh_bi_setenv);
	if (ft_strcmp("unsetenv", exe) == 0 || ft_strcmp("unset", exe) == 0)
		return (sh_bi_unsetenv);
	return (NULL);
}
