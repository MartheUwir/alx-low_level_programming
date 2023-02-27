#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; 

   
    srand(time(NULL));

    
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int random = rand() % 62; 
        if (random < 26) {
            password[i] = 'a' + random;
        } else if (random < 52) {
            password[i] = 'A' + random - 26; 
        } else {
            password[i] = '0' + random - 52; 
        }
    }
    password[PASSWORD_LENGTH] = '\0'; 

    printf("%s\n", password);

    return 0;
}
