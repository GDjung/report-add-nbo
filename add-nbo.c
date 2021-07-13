#include<stdio.h>
#include<stdint.h>
#include <netinet/in.h> //network ntoh
uint32_t my_fileRead(char *filename)
{
    uint32_t result;
    FILE* file = fopen(filename,"r");
    fread(&result,4,1,file);
    fclose(file);

    return ntohl(result);
}
int main(int argc, char** argv)
{
    uint32_t a,b;
    
    a = my_fileRead(argv[1]);
    b = my_fileRead(argv[2]);
    printf("%d(%p) + %d(%p) = %d(%p)\n",a,a,b,b,a+b,a+b);
    
}
