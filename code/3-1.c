#include <stdio.h>
#include <string.h>

void read_only(int const *arr, int size){
    // arr[0] = 999;

    for(int i = 0; i < size; i++){
        printf("%d\n", *(arr+i));
    }
}


int main(){
    int nums[] = {10, 20, 30, 40, 50};
    read_only(nums, 5);

    return 0;
}
