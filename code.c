// loop control statement : break, continue.
// break : exit from the loop. 

// write a programe that allows user to enter  integer untill he/she enter 0 or negetive number
#include <stdio.h>

int main() {
    int num;
    while (1) {
        printf("Enter an integer (0 or negative to quit): ");
        scanf("%d", &num);
        if (num <= 0) {
            break;
        }
    }
    return 0;
}
// continue : skip the current iteration and jump to the next iteration of the loop.
// write a programe that allows user to enter  integer untill he/she enter 0 or negetive number
// but skip the even numbers