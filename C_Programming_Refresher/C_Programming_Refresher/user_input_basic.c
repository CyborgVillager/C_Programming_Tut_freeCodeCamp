#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//scanf updated to scanf_s, video here: https://youtu.be/UafG3VxQaa8?si=cUI_atmWQYolInNs

int main() {
    int player_Age;
    char player_Name[50] = { 0 };

    printf("Enter Your Name: ");
    fgets(player_Name, sizeof(player_Name), stdin);

    // This removes the newline character that fgets captures
    size_t len = strlen(player_Name);
    if (len > 0 && player_Name[len - 1] == '\n') {
        player_Name[len - 1] = '\0';
    }

    printf("Your Name is %s\n", player_Name);

    // Clearing the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // Age Input
    printf("Enter Your Age: ");
    scanf_s("%d", &player_Age);
    printf("Your Age is %d\n", player_Age);

    return 0;
}

/*
//OLD CODE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    int player_Age;
    //[50] max length 50 chara, however for scanf can just use %49s to read up to 49 charas
    char player_Name[50];
    printf("Enter Your Name: ");
    scanf("%49s", player_Name);
    printf("Your Name is %s\n", player_Name);
    //Age Input
    printf("Enter Your Age: ");
    scanf("%d", &player_Age);
    printf("Your Name is %d", &player_Age);

    return 0;
}
*/
