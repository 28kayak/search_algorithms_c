//
// Created by Kaya Ota on 2018/11/26.
//
#include <iostream>
#include <stdio.h>

#define LIMIT 21
#define MAX_INT 10000

int main(){
    int cube[LIMIT];
    int sum_of_cube[LIMIT][LIMIT];
    int i,j,m,n;
    int flag;
    int target;
    int answer, a1,a2, b1,b2;

    /*calculate cube*/
    for (int i = 0; i < LIMIT ; ++i) {
        cube[i] = (i + 1) * (i + 1) * (i + 1);
        printf("cube value = %d \n", cube[i]);
    }
    /*Sub of cube*/
    for (int i = 0; i < LIMIT; ++i) {
        for (int j = 0; j < LIMIT; ++j) {
            sum_of_cube[i][j] = cube[i] + cube[j];
        }
    }

    answer = MAX_INT; //set answer
    for (int i = 0; i < LIMIT; i++) {
        for (j =  i; j <  LIMIT; j++) {
            target = sum_of_cube[i][j];
            flag = 0;


            for (m = 0; m < LIMIT; m++) {
                for (n = m; n < LIMIT ; n++) {
                    if(target == sum_of_cube[i][j] && target < answer && i != m && j != n ) {
                        if(flag){
                            continue;
                        }
                        printf("target %d\n", target);
                        answer = target;
                        a1 = i + 1;
                        a2 = j + 1;
                        b1 = m + 1;
                        b2 = n + 1;
                        flag = 1;

                    }
                    if(flag){
                        continue;
                    }

                }//for
                if(flag){
                    continue;
                }

            }



        }//for

    }//for

    printf("answer : %d = %d ^ 3 + %d ^ 3 =  %d ^ 3 + %d ^ 3", answer, a1,a2,b1,b2);


}//main