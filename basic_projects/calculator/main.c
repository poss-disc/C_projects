#include <stdio.h>
#include "calc.h"

int main(){
    calculate();

    char run_again;
    printf("Do you want to calculate again?(Y/n): ");
    run_again = getchar();
    
    while (run_again == 'Y' || run_again == 'y'){
        getchar();
        calculate();
        printf("Do you want to calculate again?(Y/n): ");
        run_again = getchar();
    }

    return 0;
}
