#include <stdio.h> 
#include <string.h>

int overflow(char * input1){
    char buffer[16];
    strcpy(buffer, input1);
    return 0;
}

void main(int argc, char * argv[]){
    overflow(argv[1]);
}
