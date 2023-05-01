#include<stdio.h>
#include "uname/uname.h"
#include "cat/cat.h"

int main(){

    printf("Enter to main\n");
    cat_busy("foo.txt");
    uname_busy();
    
    return 0;
}