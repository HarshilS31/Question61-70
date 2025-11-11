//  Q63: Merge two arrays.

#include <stdio.h>
int main() {
    int arr[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int merge[10];
    int i,j;
    for (i = 0; i < 5; i++) {
        merge[i] = arr[i];
    }
    for (j = 0; j < 5; j++) {
        merge[i+j] = arr2[j];
    }
    printf("Merged array:\n");
}