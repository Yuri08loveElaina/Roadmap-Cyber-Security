// password_check.c
#include <stdio.h>
#include <string.h>

#define PASSWORD "supersecret"
#define FLAG "FLAG{REVERSE_ENGINEERING_SUCCESS}"

int check_password(const char *input) {
    return strcmp(input, PASSWORD) == 0;
}

int main() {
    char input[64];

    printf("Enter password: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Input error!\n");
        return 1;
    }

    // Remove newline char nếu có
    size_t len = strlen(input);
    if (len > 0 && input[len-1] == '\\n') {
        input[len-1] = '\\0';
    }

    if (check_password(input)) {
        printf("Correct! Here's the flag: %s\\n", FLAG);
    } else {
        printf("Wrong password. Access denied.\\n");
    }

    return 0;
}
