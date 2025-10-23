// Write a C program to find the largest element in an array

#include<stdio.h>
int main(){
    int n, i;
    int arr[] = {23,565,677,78889,677};

    n = sizeof(arr)/ sizeof(arr[0]);
    int largestnumber = arr[0];

    for (i = 0; i<n; i++){
        if (arr[i] > largestnumber){
            largestnumber = arr[i];
        }
    }
    printf("Largest number is: %d", largestnumber);
    return 0;
}