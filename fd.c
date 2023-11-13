#include <stdio.h>
int main()
{
    int arr1s = 5, arr2s = 5, arr_rs, i, j;
 

    int a[5] = { 1, 2, 3, 4, 5 };
 

    int b[5] = { 6, 7, 8, 9, 10 };
 

    arr_rs = arr1s + arr2s;
    int c[arr_rs];
 

    for (i = 0; i < arr1s; i++) {
        c[i] = a[i];
    }
 

    for (i = 0, j = arr1s;
         j < arr_rs && i < arr2s; i++, j++) {
        c[j] = b[i];
    }

    for (i = 0; i < arr_rs; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}