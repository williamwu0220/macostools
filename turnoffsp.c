#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    setuid(0);
    system("/usr/bin/mdutil -i off -a");
    return 0;
}
