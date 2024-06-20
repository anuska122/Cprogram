// To read a data from a file

#include<stdio.h>
int main()
{
    FILE *Fp;
    char filename[20];
    char data[20];
    printf("Enter the file name:");
    scanf("%s",filename);
    Fp = fopen(filename,"r");
    if(Fp==NULL){
        printf("Error while opening file\n");
    }
    else{
        printf("file is opened");
    }
    printf("Contents of the file \n");
    while(fgets(data, sizeof(data), Fp)!=NULL){
        printf("%s",data);
    }
    fclose(Fp);
    return 0;
}