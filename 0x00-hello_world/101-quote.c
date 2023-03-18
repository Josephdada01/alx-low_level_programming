#include <stdio.h>
#include <unistd.h>
/**
 * main - a c programm that printsout line error
 *
 * Return: 1 (success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora korpa, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora korpa, 2015-10-19"));
return (1);
}
