//
// Created by Kaya Ota on 2018/12/06.
//

/*
* ruth aaron pair is a pair that two consecutive integers for which the sums of the prime factor of these integer are equal.
*for example
* 714 = 2 × 3 × 7 × 17
* 715 = 5 × 11 × 13
* and
* 2 + 3 + 7 + 17 = 5 + 11 + 13
* */
#include <iostream>
#include <math.h>


void getPrimeFactor(int n){
    // Print the number of 2s that divide n
    while (n % 2 == 0){

        printf("%d ", 2);
        n = n / 2;
    }
    //at this point n = odd
    for (int i = 3; i <= sqrt(n); i = i+2 ) {
        while (n%i == 0)
        {
            //if an odd number can divide n, then print it out.
            printf("%d ", i);
            n = n/i;
        }
    }
    //when n is one of prime and bigger than 2.
    if (n > 2) {
        printf("%d ", n);
    }
}

int sumOfPrimeNum(int n){
    int sum = 0;
    // Print the number of 2s that divide n
    while (n % 2 == 0){
        sum = sum + 2;
        printf("%d ", 2);
        n = n / 2;
    }
    //at this point n = odd
    for (int i = 3; i <= sqrt(n); i = i+2 ) {
        while (n%i == 0)
        {
            //if an odd number can divide n, then print it out.
            sum = sum + i;
            printf("%d ", i);
            n = n/i;
        }
    }
    //when n is one of prime and bigger than 2.
    if (n > 2) {
        sum = sum + n;
        printf("%d ", n);
    }
    return sum;
}//func




int main(){

    int max = 20000;
    int pair_counter = 0;
    for (int index = 2; index < max ; index++) {
        int sum1 = sumOfPrimeNum(index);
        int sum2 = sumOfPrimeNum(index + 1);
        if(sum1 == sum2){
            pair_counter++;
            printf("\nruth aaron pair --> %d and %d \n", index, index + 1 );
        }
    }


    printf("\nNumber of the pair found: %d" , pair_counter);
    return 0;
}