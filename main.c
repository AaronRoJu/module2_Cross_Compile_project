#include<stdio.h>
#include "uname/uname.h"
#include "cat/cat.h"
#include "sleep/sleep.h"

int main(int argc, char **argv){
    printf("Enter to main\n");
    //************SLEP************
    if((strcmp("./sleep", argv[0])==0) || (strcmp("sleep", argv[0])==0)){

        /* SLEEP COMMAND TEST
        printf("TEST - waiting 3 secs...\n");
        sleep(sleep_busy(3));
        printf("TEST - 3 elapsed...\n");
        */

        if(argc == 2){
            if(atoi(argv[1]) > 0){
                //printf("2 arguments received, %s seconds...\n", argv[1]);
                sleep(sleep_busy(atoi(argv[1])));
                //printf("%s seconds elapsed...\n", argv[1]);
            }
            else{
                printf("Arg not valid...\n");
            }              
        }
        else{
            printf("Not enough arguments (or more than 2)...\n");
        }

    }
    //************CAT************
    else if((strcmp("./cat", argv[0])==0) || (strcmp("cat", argv[0])==0)){
        cat_busy(argv[1]);
    }

    //************UNAME************
    else if((strcmp("./uname", argv[0])==0) || (strcmp("uname", argv[0])==0)){
        if(argc == 1){
            uname_busy();            
        }
        else{
            printf("Not enough arguments (or more than 1)...\n");
        }
    }



    printf("Enter to main\n");
    //cat_busy("foo.txt");
    //uname_busy();
    //sleep(sleep_busy(3));
    
    return 0;
}