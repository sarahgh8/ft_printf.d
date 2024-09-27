#include "ft_printf.h"

int	ft_puthex(int n)
{
	char hex[] = "0123456789ABCDEF";
	int arr[11];
	t_putnbr	v;

	v.nb = (unsigned int)n;
	v.counter = 0;
	v.i = 0;
	
	if (v.nb < 16)
	{
		ft_putchr(hex[v.nb]);
		return (1);
	} 
	else {
		while (v.nb > 0) {
			arr[v.i++] = hex[v.nb % 16];
			v.nb = v.nb / 16;
			v.counter++;
		}
	}
	arr[v.i--] = '\0';
	while (v.i >= 0)
		ft_putchr(arr[v.i--]);
	return (v.counter);
}

int main()
{
	int x = ft_puthex(456);
	int y = (printf("\n%X", 456) - 1);
	printf("\noriginal: %x\nour: %x", y, x);
    return (0);
}
