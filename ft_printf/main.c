/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afailde- <afailde-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:45:02 by afailde-          #+#    #+#             */
/*   Updated: 2024/09/05 14:41:45 by afailde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char character = '1';
	char letter = 'v';
	ft_printf("My character is: %c %c \n", character, letter);
	printf("PRINTF_ORIGINAL My character is: %c %c \n", character, letter);

	char *mystring = "Hello world";
	ft_printf("My string is: %s \n", mystring);
	printf("PRINTF_ORIGINAL My string is: %s \n", mystring);

	int	number1 = 1;
	ft_printf("My first number is: %d \n", number1);
	printf("PRINTF_ORIGINAL My first number is: %d \n", number1);

	int number2 = -2147483648;
	ft_printf("My second number is: %i \n", number2);
	printf("PRINTF_ORIGINAL My second number is: %i \n", number2);

	char *percent = "% lo";
	ft_printf("I'm looking for: %% \n", percent);
	/* printf("PRINTF_ORIGINAL I'm looking for: %% \n", percent); */

	int hex_numb = 254;
	ft_printf("My hex number is: %x\n", hex_numb);
	printf("PRINTF_ORIGINAL My hex number is: %x\n", hex_numb);

	int hex_numb2 = 4637;
	ft_printf("My second hex number is: %X\n", hex_numb2);
	printf("PRINTF_ORIGINAL My second hex number is: %X\n", hex_numb2);

	int unsigned_number1 = 20;
	ft_printf("My unsigned number is: %u\n", unsigned_number1); 
	printf("PRINTF_ORIGINAL My unsigned number is: %u\n", unsigned_number1);

	int unsigned_number2 = -20;
	ft_printf("My unsigned number is: %u\n", unsigned_number2);
	printf("PRINTF_ORIGINAL My unsigned number is: %u\n", unsigned_number2); 

	char *my_string = "Hello World";
	ft_printf("My memory direction is: %p\n", my_string);
	printf("PRINTF_ORIGINAL My memory direction is: %p\n", my_string);

	return (0);
}

// int	main(void)
// {
// 	int	size;

// 	char	c = 'D';
// 	printf("\nCHAR (c):\n");
// 	size = printf("Printf: %c\n", c);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %c\n", c);
// 	printf("Size ft_printf: %d\n", size); 

// 	int		n = -123;
// 	printf("\nINTEGER (i):\n");
// 	size = printf("Printf: %i\n", n);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %i\n", n);
// 	printf("Size ft_printf: %d\n", size);

// 	printf("\nINTEGER (d):\n");
// 	size = printf("Printf: %d\n", n);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %d\n", n);
// 	printf("Size ft_printf: %d\n", size);

// 	unsigned int	ui = 42;
// 	printf("\nUNSIGNED INTEGER (u):\n");
// 	size = printf("Printf: %u\n", ui);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %u\n", ui);
// 	printf("Size ft_printf: %d\n", size);

// 	printf("\nPERCENTAGE (%%):\n");
// 	size = printf("Printf: %%\n");
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %%\n");
// 	printf("Size ft_printf: %d\n", size);

// 	char	*s = "Hello World!";
// 	printf("\nSTRING (s):\n");
// 	size = printf("Printf: %s\n", s);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %s\n", s);
// 	printf("Size ft_printf: %d\n", size);

// 	char	*sn = NULL;
// 	printf("\nSTRING NULL (s):\n");
// 	size = printf("%s\n", sn);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("%s\n", sn);
// 	printf("Size ft_printf: %d\n", size);

// 	int *p = &n;
// 	printf("\nPOINTER (p):\n");
// 	size = printf("Printf: %p\n", (void *)p);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %p\n", (void *)p);
// 	printf("Size ft_printf: %d\n", size);

// 	printf("\nVOID POINTER(p):\n");
// 	size = printf("Printf: %p\n", "");
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %p\n", "");
// 	printf("Size ft_printf: %d\n", size);

// 	unsigned int	x = -1;
// 	printf("\nLOWERCASE HEXADECIMAL (x):\n");
// 	size = printf("Printf: %x\n", x);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %x\n", x);
// 	printf("Size ft_printf: %d\n", size);

// 	unsigned int	xx = -1;
// 	printf("\nUPPERCASE HEXADECIMAL(X):\n");
// 	size = printf("Printf: %X\n", xx);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: %X\n", xx);
// 	printf("Size ft_printf: %d\n", size);

// 	printf("\nVOID PRINT:\n");
// 	//size = printf("");
// 	//printf("Size Printf: %d\n", size);
// 	size = ft_printf("");
// 	printf("Size ft_printf: %d\n", size);

// 	printf("\nWRONG CONVERSION:\n");
// 	//size = printf("Printf: %r\n", n);
// 	//printf("Size Printf: %d\n", size);
// 	// size = ft_printf("ft_printf: %r\n", n);
// 	// printf("Size ft_printf: %d\n", size);

// 	printf("\nNOT PRINTABLE:\n");
// 	size = printf("Printf: \001\002\007\v\010\f\r\n");
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: \001\002\007\v\010\f\r\n");
// 	printf("Size ft_printf: %d\n", size);

// 	printf("\nMULTIPLE CONVERSIONS:\n");
// 	size = printf("Printf: int = %i, char = %c, str = %s, hex = %x\n",
// 		n, c, s, x);
// 	printf("Size Printf: %d\n", size);
// 	size = ft_printf("ft_printf: int = %i, char = %c, str = %s, hex = %x\n",
// 		n, c, s, x);
// 	printf("Size ft_printf: %d\n", size);

// 	return (0);
// }

// int main()
// {
// 	ft_printf(" %p \n", -1);
// 	printf(" %p \n", -1);
// 	ft_printf(" %p \n", 1);
// 	printf(" %p \n", 1);
// 	ft_printf(" %p \n", 15);
// 	printf(" %p \n", 15);
// 	ft_printf(" %p \n", 16);
// 	printf(" %p \n", 16);
// 	ft_printf(" %p \n", 17);
// 	printf(" %p \n", 17);
// 	ft_printf(" %p %p \n", 0, 0);
// 	printf(" %p %p ", 0, 0);
// }