#include <stdio.h>
#include <unistd.h>

int main(void) {
    while (1) {
        printf("cyber_daemon : service actif\n");
        fflush(stdout);
        sleep(5);
    }
    return 0;
}
