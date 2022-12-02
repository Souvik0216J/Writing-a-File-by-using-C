#include<stdio.h>
int main()
{
    FILE *fp1;
    char str[50];
    printf("Enter String: ");
    gets(str);
    fp1 = fopen("Abc.txt", "a");
    fprintf(fp1, "%s", str);
    fclose(fp1);
    printf("\nFile Write Complete.");
    return 0;
}