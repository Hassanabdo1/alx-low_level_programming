#include <stdio.h>
FILE *fptr;

int main()
{

  fptr = fopen("filename.txt","w");

if (fptr == NULL)
{
    printf("can't open");
}
else{
    printf("can open");
}



}