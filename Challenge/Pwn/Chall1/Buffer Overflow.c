// pwn1_simple_bof.c
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void win() {
    system("/bin/sh");
}

void vuln() {
    char buf[64];
    printf("Input something: ");
    fgets(buf, 256, stdin);  // intentionally unsafe, đọc quá kích thước buf
    printf("You entered: %s\n", buf);
}

int main() {
    setbuf(stdout, NULL);
    vuln();
    printf("Bye!\n");
    return 0;
}
