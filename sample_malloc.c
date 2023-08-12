#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	char *a = malloc(32768);
	a[0] = 'N';
	printf("%a\n", a[0]);
	free(a);
}
