//
// Created by Kaya Ota on 2018/11/26.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

#define MAX 50000000
#define STEP 1000
int main(){
    double s = 0.0;
    long int n;
    for (n = 1; n <= MAX ; n++) {
        s += 1./n;
        if ((n % STEP) == 0){
            printf("Euler(%ld) is %15.14f\n", n , s - log((double)n));
        }

    }
}//main