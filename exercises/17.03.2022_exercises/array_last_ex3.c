#include <stdio.h>

int intersectionArr(int arr1[], int arr2[], int intersect_result[]) {
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr1[i] == arr2[j]){
                intersect_result[index] = arr1[i];
                index++;
            }
        }
        
    }
    return index;
}

int unionArr(int arr1[], int arr2[], int union_result[]) {
    int index = 0;
    //Copy the arr1 to union_result
    for(int i = 0; i < 5; i++){
        union_result[index] = arr1[i];
        index++;
    }
    //{1,2,3,4,5} index 5
    for (int i = 0; i < 5; i++)
    {
        //arr2[i]
        int flag = 1; //arr2[i] is not in the arr1
        for (int j = 0; j < 5; j++)
        {
            if(arr2[i] == arr1[j]){ //Assumption is not correct arr2[i] is in arr1
                flag = 0;
            }
        }
        
        if(flag == 1) {//Put arr2[i] to result array and increment index
            union_result[index] = arr2[i];
            index++;
        }
    }   

    return index;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {44, 55, 1, 2, 3};
    int intersect_result[5] = {0};
    int union_result[10];
    int intersec_size;
    intersec_size = intersectionArr(arr1, arr2, intersect_result);
    printf("Intersection of arrays: ");
    for (int i = 0; i < intersec_size; i++)
    {
        printf("%d ", intersect_result[i]);
    }
    printf("\n");
    int union_size;
    union_size = unionArr(arr1, arr2, union_result);
    printf("Union of arrays: ");
    for (int i = 0; i < union_size; i++)
    {
        printf("%d ", union_result[i]);
    }
    printf("\n");
    return 0;
}
