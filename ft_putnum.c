#include "printf.h"

int	ft_putnum(int n)
{
	char	*h;
	int		count;

	if (flag == 1)
		h = ft_itoa(h);
	else
		h = ft_itoa_u(h);
	count = ft_putstr(h);
	free(h);
	return (count);
}

char	*ft_itoa_u(unsigned int n)
{
	char	*h;
	int		digit;

	digit = ft_getdigit(n);
	h = (char *)malloc(sizeof(char) * (digit + 1));
	if (!h)
		return (NULL);
	digit -= 1;
	h[digit] = '\0';
	while (digit >= 0)
	{
		h[digit] = num % 10 + '0';
		num /= 10;
		digit -= 1;
	}
	return (str);
}

static int	ft_getdigit(unsigned int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		digit ++;
	}
	return (digit);
}
