#include <stdio.h>

int main() {
    int n, i, flag = 1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n/2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Perfect Array");
    else
        printf("Not a Perfect Array");

    return 0;
}