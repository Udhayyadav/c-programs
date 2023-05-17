#include <stdio.h>
int linear(int arr[], int n, int key, int ind)
{
    if (ind==n) {
        return -9;
    }
    if (arr[ind]==key) {
        return ind;
    }
    return linear(arr, n, key, ind+1);
}
int main()
{
    int a[20],n,key;
    int ind;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",a[i]);
    scanf("%d",&key);
    ind= linear(a, n, key, 0);
    
    if (ind==-9) {
        printf("Element not found in the array");
    } else {
        printf("Element found at index %d", ind);
    }
    
    return 0;
}