// pwn3_bof_nx_rop.c
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void win() {
    printf("You win!\n");
    system("/bin/sh");
}

void vuln() {
    char buf[64];
    printf("Input something: ");
    fgets(buf, 256, stdin);
    printf("You entered: %s\n", buf);
}

int main() {
    setbuf(stdout, NULL);
    vuln();
    printf("Bye!\n");
    return 0;
}
