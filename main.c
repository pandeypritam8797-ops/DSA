#include <stdio.h>
int main()
{
    int arr[]= {2,4,8,12,16};
    int N = sizeof(arr)/sizeof(arr[0]);
    printf("array elements using loop: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
        /* code */
    }
    printf("\n");
    return 0;
    
}