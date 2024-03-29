/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:47:05 by sam               #+#    #+#             */
/*   Updated: 2023/02/19 16:47:39 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_charcount(char *str, int c)
{
	int	counter;
	int	i;

	i = -1;
	counter = 0;
	while (str[++i])
	{
		if (str[i] == c)
			counter++;
	}
	return (counter);
}
