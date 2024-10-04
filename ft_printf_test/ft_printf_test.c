#include "../ft_printf.h"

int main ()
{
    //Text ***********************************************************************
    ft_printf("Hello, World!\n");
    printf("Hello, World!\n");

    ft_printf("Hello, %s!\n", "World");
    printf("Hello, %s!\n", "World");

    ft_printf("%s, %s! %s\n", "Hello", "World", "How are you?");
    printf("%s, %s! %s\n", "Hello", "World", "How are you?");

    ft_printf("%s%s%s%s", "Hello", ", ", "World", "!\n");
    printf("%s%s%s%s", "Hello", ", ", "World", "!\n");

    //char ***********************************************************************
    ft_printf("%c\n", 'A');
    printf("%c\n", 'A');

    ft_printf("%c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');
    printf("%c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');

    ft_printf("%c", '\0');
    printf("%c", '\0');

    //int ***********************************************************************
    ft_printf("%d\n", 42);
    printf("%d\n", 42);

    ft_printf("%d\n", -42);
    printf("%d\n", -42);

    ft_printf("%d\n", 0);
    printf("%d\n", 0);

    ft_printf("%d\n", 2147483647);
    printf("%d\n", 2147483647);

    ft_printf("%d\n", -2147483648);
    printf("%d\n", -2147483648);

    //***********************************************************************
        ft_printf("%i\n", 42);
    printf("%i\n", 42);

    ft_printf("%i\n", -42);
    printf("%i\n", -42);

    ft_printf("%i\n", 0);
    printf("%i\n", 0);

    ft_printf("%i\n", 2147483647);
    printf("%i\n", 2147483647);

    ft_printf("%i\n", -2147483648);
    printf("%i\n", -2147483648);

    //unsigned int ***********************************************************************

    ft_printf("%u\n", 42);
    printf("%u\n", 42);

    ft_printf("%u\n", 0);
    printf("%u\n", 0);

    ft_printf("%u\n", 4294967295);
    printf("%u\n", 4294967295);

    //hex ***********************************************************************

    ft_printf("%x\n", 42);
    printf("%x\n", 42);

    ft_printf("%x\n", 0);
    printf("%x\n", 0);

    ft_printf("%x\n", 4294967295);
    printf("%x\n", 4294967295);

    //Hex ***********************************************************************

    ft_printf("%X\n", 42);
    printf("%X\n", 42);

    ft_printf("%X\n", 0);
    printf("%X\n", 0);

    ft_printf("%X\n", 4294967295);
    printf("%X\n", 4294967295);

    //pointer ***********************************************************************

    int s = 42;
    ft_printf("%p\n", &s);
    printf("%p\n", &s);

    //flags ***********************************************************************

    ft_printf("%#x\n", 42);
    printf("%#x\n", 42);

    ft_printf("%#X\n", 42);
    printf("%#X\n", 42);

    ft_printf("% d\n", 42);
    printf("% d\n", 42);

    //mix ***********************************************************************

    ft_printf("Hello, %s! %d %x %X %p\n", "World", 42, 42, 42, &s);
    printf("Hello, %s! %d %x %X %p\n", "World", 42, 42, 42, &s);

    ft_printf("Hello, %s! %d %x %X %p\n", "World", -42, -42, -42, &s);
    printf("Hello, %s! %d %x %X %p\n", "World", -42, -42, -42, &s);

    ft_printf("Hello, %s! %d %x %X %p\n", "World", 0, 0, 0, &s);
    printf("Hello, %s! %d %x %X %p\n", "World", 0, 0, 0, &s);

    ft_printf("Hello, %s! %d %x %X %p\n", "World", 2147483647, 2147483647, 2147483647, &s);
    printf("Hello, %s! %d %x %X %p\n", "World", 2147483647, 2147483647, 2147483647, &s);

    //counter ***********************************************************************

    ft_printf("%d\n", ft_printf("Hello, %s! %d %x %X %p\n", "World", -42, -42, -42, &s));
    printf("%d\n", printf("Hello, %s! %d %x %X %p\n", "World", -42, -42, -42, &s));

    //other ***********************************************************************
    ft_printf("other\n");
    ft_printf("%###########x\n", 400);
    printf("%##########x\n", 400);

    return (0);


}