#include <stdio.h>

#include <unistd.h>

int main()
{
    int a = 1;
    while ( a <= 20 )
    {
        printf ( "Hello World\n" );
        a ++;
        sleep(3);
    }
    return 0;
}
