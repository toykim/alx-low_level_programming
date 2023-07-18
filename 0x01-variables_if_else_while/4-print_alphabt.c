#include <stdio.h>
/*
 * main-  a program that prints the alphabet in lowercase,
 * follwed by a new line except q and e
 * return: always 0
 */

int main(void)
{
        char letter;

        for (letter= 'a'; letter <= 'z'; letter++)
        if (letter != 'q' && letter != 'e')
        {
                putchar(letter);
        }
        putchar('\n');
        return (0);
}
