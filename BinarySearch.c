#include<stdio.h>
int binarysearch(int a[], int l, int h, int x) {
    if(h>=l) {
        int f=0,  mid=l+(h-l)/2;
        if(a[mid]==x)
            return 0;
        if(a[mid]>x)
            return binarysearch(a, l, mid-1, x);
        else
            return binarysearch(a, mid+1, h, x);
    }
    return 1;   
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
    int flag=binarysearch(a, 0, n, x);
    if(flag==0)
        printf("Element found\n");
    else
        printf("Element not found\n");
}