#include<stdio.h>
#include "uname/uname.h"
#include "cat/cat.h"
#include "sleep/sleep.h"

int main(){

    printf("Enter to main\n");
    cat_busy("foo.txt");
    uname_busy();
    sleep(sleep_busy(3));
    
    return 0;
}