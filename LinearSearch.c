#include<stdio.h>
void linearsearch(int a[], int n, int x) {
    int i, f=0;
    for(i=0; i<n; i++)
    {
        if(a[i] == x)
        {
           f=1;
           break;
        }
    }
    if(f==0)
        printf("Element not found\n");
    else
        printf("Element found\n");
}
void main() {
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int a[n], x;
    printf("Enter elements in array:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to be search: ");
    scanf("%d", &x);
    linearsearch(a, n, x);
}