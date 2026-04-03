#include <stdio.h>

void print_reverse(int *arr, int size){
    int *end = arr;
    arr += (size-1);
    for(; arr >=end; arr--){
        printf(" %d", *arr);
    }
}
int main(){
   int nums[] = {1, 2, 3, 4, 5};

   print_reverse(nums, 5);
   printf("\n");

   return 0;


}
