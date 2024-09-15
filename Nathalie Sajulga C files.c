#include <stdio.h>

int main()
{

{
   printf("Jhonchris Torralba\n");
   printf("Queen Anns Sajolga\n");
   printf("Nathalie Sajulga\n");
   printf("Elaiza Cultura\n");
   printf("Jerrianne Kent Alejandroa\n");
   }


    double sum = 0;
    double factorial = 1;

    printf("\n1/1!");
    sum += 1.0;

    for (int i = 2; i <= 7; i++) {
        factorial *= i;
        sum += (double)i / factorial;
        printf("+%d/%d!", i, i);
    }

    printf("=\n\nAnswer: %lf\n", sum);

    return 0;
}
