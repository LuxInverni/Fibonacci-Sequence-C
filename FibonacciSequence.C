#include <stdio.h>

void fibon();
int main(void)
{    int x = 0, y = 1, z=1;

    for (int i=0; i<15; i++)
    {
    printf("The next Number is %i\n", z );
    fibon (&x,&y,&z);
    }
}
void fibon(int *a, int *b, int *c)
    {   *c=*a+*b;
        *a=*b;
        *b=*c;
    }
