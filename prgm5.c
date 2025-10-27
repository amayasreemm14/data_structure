#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[200]; 
    int b[100];
    int n1, n2, i, j, temp, total;

    printf("Enter how many elements in first array: ");
    scanf("%d", &n1);
    printf("Enter first array elements: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter how many elements in second array: ");
    scanf("%d", &n2);
    printf("Enter second array elements: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    
    total = n1 + n2;
    for (i = 0; i < n2; i++) {
        a[n1 + i] = b[i];
    }

    
    for (i = 0; i < total - 1; i++) {
        for (j = 0; j < total - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nMerged and sorted array elements are:\n");
    for (i = 0; i < total; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
