// This code is to find the env variable that we housed /bin/sh.
// We will feed the output address of this program as an argument of a system() call.
#include <stdio.h>
#include <stdlib.h>

void main() {
    char* shell = getenv("MYSHELL");
    if (shell) {
        printf("%x\n", (unsigned int)shell);
    }
}
