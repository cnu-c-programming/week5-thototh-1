#include <stdio.h>
#include <string.h>

long my_strtol(char *str, char **endptr){
    long res = 0;
    while((int)*str>=48 && (int)*str<=57){
        res = res*10;
        res += *str - '0';
        str++;
    }
    *endptr = str;

    return res;
}


int main(){
    char str[] = "2026hello";
    char *end;
    long val = my_strtol(str, &end);

    printf("%ld %s\n", val, end);

    return 0;
}
