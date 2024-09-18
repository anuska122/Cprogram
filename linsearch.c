#include <stdio.h>
int LinSearch(int a[], int l, int r, int key)
{
    if (r < l)
        return -1;
    if (a[l] == key)
        return 1;
    return LinSearch(a, l + 1, r, key);
}
int main()
{
    int n, key;
    int a[6], i;
    printf("Enter the size of list:");
    scanf("%d", &n);
    printf("\nEnter the element of list:");
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Enter the key to be searched:");
    scanf("%d", &key);
    int index = LinSearch(a, 0, n - 1, key);
    if (index != -1)
    printf("Element %d is present at index %d", key, index);
    else
        printf("Element %d is not present", key);
    return 0;
}