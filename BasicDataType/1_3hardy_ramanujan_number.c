//
// Created by Kaya Ota on 2018/12/05.
//

#include<stdio.h>
/* 22^3=10648なので，解として現れるのは21^3まで */
#define LIMIT 21
#define MAX_INT 10000
int main()
{
    int cube[LIMIT];              /* cube[i]にiの３乗を保存 */
    int sum_of_cube[LIMIT][LIMIT]; /* 立法数の和を保存する */
    int i,j,m,n;                  /* loop counter */
    int flag;                     /* flag */
    int target;                   /* a target */
    int answer,a1,a2,b1,b2;       /* solution */
    /* cubeに値を埋める */
    for(i = 0;i < LIMIT;i++){
        cube[i] = (i+1)*(i+1)*(i+1);
    }
    /* sum_of_cubeに値を埋める */
    for(i=0;i<LIMIT;i++) {
        for (j = i; j < LIMIT; j++) {
            sum_of_cube[i][j] = cube[i] + cube[j];
        }
    }

    answer = MAX_INT;//set answer be a big number
    for(i=0;i<LIMIT;i++){
        for(j=i;j<LIMIT;j++){
            target = sum_of_cube[i][j];
            flag = 0;
            /* targetと同じ値を配列中から探す */
            for(m=0;m<LIMIT;m++){
                for(n=m;n<LIMIT;n++){
                    if(target == sum_of_cube[m][n] && target < answer && i != m && j != n){
                        if (flag) {
                            continue;
                        }
                        answer = target;
                        a1 = i+1;
                        a2 = j+1;
                        b1 = m+1;
                        b2 = n+1;
                        flag = 1;
                    }//if
                    if (flag) {
                        continue;
                    }
                }
                if (flag) {
                    continue;
                }
            }//3rd for
        }//2nd for
    }//1st for

    printf("answer:%d = %d ^ 3 + %d ^ 3 = %d ^ 3 + %d ^ 3\n",
           answer,a1,a2,b1,b2);
}