#include "cat.h"

void cat_busy(char* argm){
    int fd = open(argm, O_RDONLY);/*Here we open the file passed */
    if (fd == -1) {
        perror("open");/*Validate a successfull open*/
        return;
    }
    char buffer[2048];
    ssize_t bR;
    while ((bR = read(fd, buffer, sizeof(buffer))) > 0) {
        if (write(STDOUT_FILENO, buffer, bR) != bR) {
        /*Here the file is readead passing the file descriptor got
         in the open() function and finally writing the readed value*/
            perror("write");
            return;
        }
    }
    if (bR == -1) {
        perror("read");
        return;
    }
    if (close(fd) == -1) {
        perror("close");
        return;
    }
}