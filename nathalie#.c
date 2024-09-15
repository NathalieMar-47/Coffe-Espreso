#include <stdio.h>

int main() {
{

   printf("Jhonchris Torralba\n");
   printf("Queen Anns Sajolga\n");
   printf("Nathalie Sajulga\n");
   printf("Elaiza Cultura\n");
   printf("Jerrianne Kent Alejandria\n\n\n");
   }

    double x, term, sum = 0;

    // Prompt the user to enter the value of x
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate and print each term in the series
    for (int i = 0; i < 7; i++) {
        if (i == 0) {
            term = x - 1.0 / x;
        } else {
            term = 0.5 * term * term;
        }
        sum += term;

        // Print the current term
        if (i == 0) {
            printf("%.2lf", term);
        } else {
            printf(" + %.2lf", term);
        }
    }

    // Print the total sum
    printf("\Answer: %.2lf\n", sum);

    return 0;
}
