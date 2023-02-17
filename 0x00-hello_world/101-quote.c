#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char message[] =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

const int message_len = sizeof(message) - 1;

write(STDERR_FILENO, message, message_len);

return (1);
}
