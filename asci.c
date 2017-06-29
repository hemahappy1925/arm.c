#include <stdio.h>

int main (void)
{

for (char i = -128; i <= 127; i++)
{
    printf("%d = %c\n", i, i);
}

return 0;
}
