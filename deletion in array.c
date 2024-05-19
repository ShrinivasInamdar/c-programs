//Deletion
#include <stdio.h>
int main() 
{
    int i, n, a[100], x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &x);

    if (x >= 1 && x <= n) {
        for (i = x - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
        printf("\nThe New array is: ");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    } else {
        printf("\nInvalid position.");
    }
}
