#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int random = rand() % 62; // 26 lowercase letters + 26 uppercase letters + 10 digits
        if (random < 26) {
            password[i] = 'a' + random; // lowercase letter
        } else if (random < 52) {
            password[i] = 'A' + random - 26; // uppercase letter
        } else {
            password[i] = '0' + random - 52; // digit
        }
    }
    password[PASSWORD_LENGTH] = '\0'; // add null terminator

    // Print the password
    printf("%s\n", password);

    return 0;
}
