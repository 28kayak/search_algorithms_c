//
// Created by Kaya Ota on 2018/12/08.
//
#include <stdio.h>
#define SIZE 100 //size of array
int operator(int n, int result[], int i){
    int j = 0;
    int count = 0;

    int result2[SIZE];
    /*copy array*/
    for(j = 0; j < SIZE; j++){
        result2[j] = result[j];
    }
    /*Print result when n = 2*/
    if(n == 2){
        result[i] += 2;
        for(j = 0; j < i; j++ ){
            printf("%d+" , result[j]);
        }
            printf("%d\n", result[j]);
            count = 1;

    }else{
        /*add 2 to result[i], and call operator(n-2, result, i+1) */
        if(n > 3){
            result[i] += 2;
            count += operator(n-2, result, i+1 );
        }
        /*add 1 to result[i], and then call operator(n-1, result2, i)*/
        if(n > 2){
            result2[i]++;
            count += operator(n-1, result2, i);
        }
    }
    return(count);
}
int main(){
    int i;
    int n;
    int count;
    int result[SIZE];

    for (int j = 0; j < SIZE ; ++j) {
        result[i] = 0;
    }
    /*Get n from user*/
    printf("n = ");
    scanf("%d", &n);

    /*Execute davide n*/
    count = operator(n, result, 0);
    /*Show the result*/
    printf("count = %d \n", count);

}

