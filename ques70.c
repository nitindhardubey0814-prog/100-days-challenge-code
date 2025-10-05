//Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main() {
    int n, i, k, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;
    for(i = 0; i < k; i++) {
        temp = arr[n-1];
        for(int j = n-1; j > 0; j--)
            arr[j] = arr[j-1];
        arr[0] = temp;
    }
    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
