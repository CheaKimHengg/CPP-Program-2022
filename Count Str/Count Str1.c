#include <stdio.h>
int main()
{
    char Address[] = "Phnom Penh";
    puts(Address);
    int max = 100;
    int count = 1;
    int As;
    for (As = 1; As <= max; As++)
    {
        if (Address[As] != '/0')
        { // count from 1
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d", count);
    return 0;
}
