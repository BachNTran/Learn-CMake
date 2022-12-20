#include <stdio.h>
#include "hello.h"
#include "lib.h"

void boo(){
    printf("BOO\n");
}

int main(void){

    printf("Hello World!\nI am learning CMake!!\n");
    printf("Foo string %d", FOOSTRING);
    foo();
    boo();
    
    return 123;
}