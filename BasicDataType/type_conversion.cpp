//
// Created by Kaya Ota on 2018/11/26.
//
#include <iostream>
#include <stdio.h>
#define HL 150
#define HU 180
#define H_STEP 5
#define WL 50
#define WU 75
#define W_STEP 5

int main(){
    int height, weight;

    printf("---------Convert to Decimal--------------\n");

    putchar('\t');
    for (weight = WL; weight <=  WU;weight = weight + W_STEP){
        printf("%d[kg]\t", weight);
    }//for

    putchar('\n');
    for (int height = HL; height <= HU; height = height + H_STEP){
        printf("%d [cm]", height);
        for (int weight = WL; weight <= WU ; weight = weight + W_STEP) {
            printf("\t%6.1f", weight/((height/100.)*(height/100.)));
        }//for
        putchar('\n');
    }//for
    printf("---------Not Convert to Decimal-----------\n");

    putchar('\t');
    for (weight = WL; weight <=  WU;weight = weight + W_STEP){
        printf("%d[kg]\t", weight);
    }//for

    putchar('\n');
    for (int height = HL; height <= HU; height = height + H_STEP){
        printf("%d [cm]", height);
        for (int weight = WL; weight <= WU ; weight = weight + W_STEP) {
            printf("\t%6.1f", weight/((height/100)*(height/100)));
        }//for
        putchar('\n');
    }//for
}//main
