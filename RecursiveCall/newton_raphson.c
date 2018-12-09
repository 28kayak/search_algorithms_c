//
// Created by Kaya Ota on 2018/12/08.
//
#include <stdio.h>
#include <math.h>

double newton(double x);
#define f(x) (x - 1 -log(x+1))  //define f(x)
#define df(x) (1 - 1.0 / (x+1)) //define f'(x)

int main(){
    //initialize case1
    double init_val = - 0.95;
    printf("x1 = %lf\n", newton(init_val));

    //initialize case2
    init_val = 3.0;
    printf("x2 = %lf\n", newton(init_val));

    return 0;

}
double newton(double val){
    double x1 = val - f(val)/df(val);
    if(fabs(x1 - val) < 0.0001){
        return x1;
    }
    else{
        return newton(x1); //recursive call
    }
}