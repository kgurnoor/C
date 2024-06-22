#include <stdio.h>
int main()
    {
        FILE *ptr= NULL;
        char string[64]="this content is made by dvjhsgfegasdiyhv ";
        ptr=fopen("myfile.txt","r");
        fscanf(ptr,"%s",string);
        printf("the content of the file has %s\n",string);
        ptr=fopen("myfile.txt","a");
        fprintf(ptr,"%s",string);
        return 0;
    
    }
