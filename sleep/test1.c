#include <stdio.h>
#include <time.h>
#include "./sleep.h"


int main(){
    int a = sleep_busy(1);

    printf("Hola mundo! - %i\n", a);
    sleep(sleep_busy(3));
    printf("Adios mundo! - %d\n", sleep_busy(3));
    return 0;
}