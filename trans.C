// Transpose of matrix

#include<stdio.h>
int main()
{
    int m[3][3], T[3][3],i,j;
    printf("Enter the element of matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            T[i][j] = m[i][j];
        }
    }
    printf("\nTranspose matrix is:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d\t",T[i][j]);
        }
        printf("\n");
        return 0;
}
}