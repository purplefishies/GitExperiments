/* $Date$ */


int foo;
#include <stdio.h>

int main(void)
{
    char *ver = "$Version$";
    char *id = "$Id$";
    printf("hello, world\n");
    printf("This is ver %s, %s\n", ver, id);
    return 0;
}
