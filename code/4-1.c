#include <stdio.h>
#include <string.h>

void echo(){
    char buf[5];
    scanf("%4s", buf);
    printf("%s\n", buf);
}

int main(){
    char buf[5];
    echo();


    return 0;
}
