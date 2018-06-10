/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:49:41 by robert0           #+#    #+#             */
/*   Updated: 2018/06/10 12:03:34 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strnstr(const char  *big, const char *little, size_t len)
{
	const char	*ret;
	const char	*sub_big;
	const char	*sub_little;
	size_t		len_test;

	ret = NULL;
	if (big != NULL)
	{
		if ((little == NULL) || (*little == '\0'))
			ret = big;

		else
		{
			while ((*big != '\0') && (ret == NULL))
			{
				if (*big == *little)
				{
					len_test = len;
					sub_big = big + 1;
					sub_little = little + 1;
					while ((len_test != 0)
							&& (*sub_big != '\0')
							&& (*sub_little != '\0'))
					{
						sub_big++;
						sub_little++;
						len_test--;
					}

					if (*sub_little == '\0')
						ret = big;
				}

				big++;
			}
		}
	}

	return ((char *)(ret));
}
