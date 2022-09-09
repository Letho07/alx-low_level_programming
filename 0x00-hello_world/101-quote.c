#include <stdio.h>
#include <unistd.h>
/**
*main- entry point
*Return -always 1(success)
*/
int main(void)
{
char *msg="and that piece of art is useful" - Dora Korpar, 2015-10-19";
write(STDOUT_FILENO, msg, 59);
return (1);
}
