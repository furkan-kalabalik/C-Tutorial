#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 1;
    int *ptr3 = &arr[1];
    printf("ptr1 = %p\n", ptr1);
    printf("ptr2 = %p\n", ptr2);
    printf("ptr1 - ptr2 = %d\n", ptr2 - ptr1);
    if (ptr1 == ptr2)
        printf("ptr1 == ptr2\n");
    else
        printf("ptr1 != ptr2\n");
        
    if (ptr2 == ptr3)
        printf("ptr2 == ptr3\n");
    else
        printf("ptr2 != ptr3\n");
    
}