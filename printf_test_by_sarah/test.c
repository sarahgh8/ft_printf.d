#include "../ft_printf.h"

int main ()
{
    //Text ***********************************************************************
    ft_printf("-----------------TEXT-----------------\n");
    ft_printf("Hello, World!\n");
    printf("Hello, World!\n");
    ft_printf("Hello, %s!\n", "World");
    printf("Hello, %s!\n", "World");
    ft_printf("%s, %s! %s\n", "Hello", "World", "How are you?");
    printf("%s, %s! %s\n", "Hello", "World", "How are you?");
    ft_printf("%s%s%s%s", "Hello", ", ", "World", "!\n");
    printf("%s%s%s%s", "Hello", ", ", "World", "!\n");

    
    //char ***********************************************************************
    ft_printf("-----------------CHAR-----------------\n");
    ft_printf("%c\n", 'A');
    printf("%c\n", 'A');
    ft_printf("%c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');
    printf("%c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');
    ft_printf("%c", '\0');
    printf("%c", '\0');
    //int ***********************************************************************
    ft_printf("-----------------INT-----------------\n");
    ft_printf("-----------------D FLAG-----------------\n");

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
    ft_printf("-----------------I FLAG-----------------\n");
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
    ft_printf("-----------------UNSIGNED INT-----------------\n");
    ft_printf("%u\n", 42);
    printf("%u\n", 42);
    ft_printf("%u\n", 0);
    printf("%u\n", 0);
    ft_printf("%u\n", 2147483647);
    printf("%u\n", 2147483647);

    //hex ***********************************************************************
    ft_printf("-----------------S. HEX-----------------\n");
    ft_printf("%x\n", 42);
    printf("%x\n", 42);
    ft_printf("%x\n", 0);
    printf("%x\n", 0);
    ft_printf("%x\n", -42);
    printf("%x\n", -42);
    //Hex ***********************************************************************
    ft_printf("-----------------CAPITAL HEX-----------------\n");
    ft_printf("%X\n", 42);
    printf("%X\n", 42);
    ft_printf("%X\n", 0);
    printf("%X\n", 0);
    ft_printf("%X\n", -42);
    printf("%X\n", -42);
    //pointer ***********************************************************************
    ft_printf("-----------------POINTER-----------------\n");
    int s = 42;
    ft_printf("%p\n", &s);
    printf("%p\n", &s);
    //flags ***********************************************************************
    ft_printf("-----------------FLAGS-----------------\n");
    ft_printf("%#x\n", 42);
    printf("%#x\n", 42);
    ft_printf("%#X\n", 42);
    printf("%#X\n", 42);
    ft_printf("% d\n", 42);
    printf("% d\n", 42);
    ft_printf("% d\n", -42);
    printf("% d\n", -42);
    //mix ***********************************************************************
    ft_printf("-----------------MIX-----------------\n");
    ft_printf("Hello, %s! %d %x %X %p\n", "World", 42, 42, 42, &s);
    printf("Hello, %s! %d %x %X %p\n", "World", 42, 42, 42, &s);
    ft_printf("Hello, %s! %d %x %X %p\n", "World", -42, -42, -42, &s);
    printf("Hello, %s! %d %x %X %p\n", "World", -42, -42, -42, &s);
    ft_printf("Hello, %s! %d %x %X %p\n", "World", 0, 0, 0, &s);
    printf("Hello, %s! %d %x %X %p\n", "World", 0, 0, 0, &s);
    ft_printf("Hello, %s! %d %x %X %p\n", "World", 2147483647, 2147483647, 2147483647, &s);
    printf("Hello, %s! %d %x %X %p\n", "World", 2147483647, 2147483647, 2147483647, &s);
    //counter ***********************************************************************
    ft_printf("-----------------COUNTER-----------------\n");
    ft_printf("%d\n", ft_printf("Hello, %s! %d %x %X %p\n", "World", -42, -42, -42, &s));
    printf("%d\n", printf("Hello, %s! %d %x %X %p\n", "World", -42, -42, -42, &s));
    //flags ***********************************************************************
    ft_printf("-----------------FLAGS-----------------\n");
    ft_printf("%#x\n", 42);
    printf("%#x\n", 42);
    ft_printf("%#X\n", 42);
    printf("%#X\n", 42);
    ft_printf("% d\n", 42);
    printf("% d\n", 42);
    ft_printf("% d\n", -42);
    printf("% d\n", -42);

    ft_printf("-----------------OTHER-----------------\n");
    // ft_printf("%s\n", NULL);
    // printf("%s\n", NULL);
    char *s1 = NULL;
    ft_printf("%s\n", s1);
    //printf("%s\n", s1);

    ft_printf("%c\n", 0);
    //printf("%c\n", 0);

    ft_printf("%##########x\n", 42);
    printf("%##########x\n", 42);

    ft_printf("%      d\n", 42);
    printf("%      d\n", 42);

    ft_printf("%      d\n", -42);
    printf("%      d\n", -42);





    return (0);
}
