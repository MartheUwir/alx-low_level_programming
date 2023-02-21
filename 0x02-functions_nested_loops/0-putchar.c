#include <unistd.h>

int main(void)
{
    char c[] = "_putchar\n";
    int i;

    for (i = 0; i < 9; i++)
    {
        write(1, &c[i], 1);
    }

    return (0);
}

