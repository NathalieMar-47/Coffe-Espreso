#include<stdio.h>
int main()
{
  {
   printf("Jhonchris Torralba\n");
   printf("Queen Anns Sajolga\n");
   printf("Nathalie Sajulga\n");
   printf("Elaiza Cultura\n");
   printf("Jerrianne Kent Alejandria\n");
   }


    int i,j,k,l,m;
    for(i=0;i<=6;i++)
    {
        for(k=65;k<=71-i;k++)
            printf("%c",k);
        for(j=1;j<=i*2-1;j++)
            printf(" ");
        for(l=71-i;l>=65;l--)
            if(l!=71)
                printf("%c",l);
        printf("\n");
    }
    return 0;
}
