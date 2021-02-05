#include <stdio.h>
#include <cs50.h>

int collatz(int n);
int main (void){

int a = get_int("Enter a number: ");

int i = collatz(a);
    printf("Collatz(%i) is %i\n",a,i);

}

int collatz(int n){

        if (n==1)
            return 0;

        else if (n%2==0){
            return 1 + collatz(n/2);
        }

        else {
            return 1 + collatz(3*n+1);
        }
    }