#include<stdio.h>
#include<math.h>
int main()
{
    float val;
    float fval, cval;
    printf("Enter a float value:");
    scanf("%f", &val);
    fval = floor(val);
    cval = ceil(val);
    printf("Floor value = %f\n Ceiling value = %f", fval, cval);
    return 0;
}