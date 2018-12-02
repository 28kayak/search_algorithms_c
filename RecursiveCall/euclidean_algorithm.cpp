//
// Created by Kaya Ota on 2018/12/02.
//
#include <iostream>
#include <time.h>

int recursive_euclid_algorithm(int m, int n){
    int reminder;
    if((reminder = m % n) == 0){
        return n;
    }else{
        return recursive_euclid_algorithm(n, reminder);
    }
}
int euclid_algorithm(int m, int n){
    int reminder;
    while((reminder = m % n) != 0){
        m = n;
        n = reminder;
    }
    return n;
}


int main(){
    //step 1 : validate input m, n where (m >= n)
    //step 2 : define reminder = m/n
    //step 3 : if reminder == 0, then terminate the program
    //step 4 : let n = m and reminder = n, then go back to step2
    int m = 264123568;
    int n = 96;
    clock_t recursive_start = clock();
    //int result = recursive_euclid_algorithm(m,n);
    int result = euclid_algorithm(m,n);

    printf("Greatest common factor = %d \n", result);
    clock_t  recursive_end = clock();
    printf("Time of first program: %f", (double)recursive_end - recursive_start);

}//main

