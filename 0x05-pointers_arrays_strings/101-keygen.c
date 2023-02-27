#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 7

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int random = rand() % 94; // 94 printable ASCII characters
        password[i] = ' ' + random; // start at space (32) and add random offset
    }
    password[PASSWORD_LENGTH] = '\0'; // add null terminator

    // Print the password
    printf("%s\n", password);

    return 0;
}
