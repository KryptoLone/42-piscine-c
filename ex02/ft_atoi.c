/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:38:41 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/03 13:16:31 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_special_character(char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\v' || *str == '\f')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	while (*str != '\0' && ft_special_character(str))
		str++;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		str++;
	result = 0;
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}
