#This Is print The Alphabet letter "S"

#include<stdio.h>

int main(void)
{
    int i,j;

    for(i=0;i<5;i++)
    {
        printf("* ");
    }
    printf("\n");
    for(j=0;j<4;j++)
    {
        printf("*\n");
     
    }
        for(i=0;i<5;i++)
    {
        printf("* ");
    }
    printf("\n");

        for(i=0;i<5;i++)
    {
        printf(" ");
        if(i>=4){
        for(j=0;j<4;j++){
        
        printf("   *");
        printf(" \n");
        for(j=0;j<4;j++){
            if(j)
            {
                printf("");
            
        printf("        *\n");
            }
        
        if(j==3)
        {
          for(i=0;i<5;i++)
        {
            printf("* ");
        }
        printf("\n");
        }
        }
        }
      }
      }     
      return 0;
}
