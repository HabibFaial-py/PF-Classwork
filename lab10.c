#include <stdio.h>
#include <string.h>

int main() {
    char user_input[100];
    char updated[200];

    printf("Enter a String to Continue : \n");
    fgets(user_input, 100, stdin);

    printf("The user typed : \n");
    fputs(user_input, stdout);

    int len = strlen(user_input);
    printf("The number of Characters in the given statment are :  %d\n", len);

    if (strstr(user_input, "bad") != NULL) {
        printf("Bad Found ! \n");
    }

    if (strstr(user_input, "good") != NULL) {
        printf("Good Found ! \n");
    }

    char *pos;

    while ((pos = strstr(user_input, "bad")) != NULL) {

        int index = pos - user_input;

        strncpy(updated, user_input, index);
        updated[index] = '\0';

        strcat(updated, "not good");
        strcat(updated, pos + 3);

        strcpy(user_input, updated);  
    }

    printf("The User Input was Updated : \n");
    fputs(user_input, stdout);

    return 0;
}
// ----------------------------------------------------q2-------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main() {
    char students[10][100];
    int n = 10;

    for (int i = 0; i < n; i++) {
        fgets(students[i], 100, stdin);
        students[i][strcspn(students[i], "\n")] = '\0'; 
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i], students[j]) > 0) {
                char temp[100];
                strcpy(temp, students[i]);
                strcpy(students[i], students[j]);
                strcpy(students[j], temp);
            }
        }
    }

    printf("Strings in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", students[i]);
    }

    return 0;
}
//---------------------------------------------Q3-----------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main() {
    char email[100], domain[100];
    printf("Enter email: ");
    scanf("%s", email);

    char *at = strchr(email, '@');
    if(at != NULL) {
        strcpy(domain, at + 1);
        printf("Domain: %s\n", domain);
    } else {
        printf("Invalid email\n");
    }

    return 0;
}
