#include <unistd.h>

void putnbr(int i)
{
    if (i > 9)
        putnbr (i / 10);
    write(1, &"0123456789"[i % 10], 1);
}

int main(void)
{
    int i;
    i = 1;
    while(i <= 100)
    {
        if (i % 3 == 0)
            write (1, "fizz", 4);
        if (i % 5 == 0)
            write (1, "buzz", 4);
        else if (i % 3)
           putnbr(i);
        i++;
    write (1, "\n", 1);
    }
}