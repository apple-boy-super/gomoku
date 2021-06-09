#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 13 + 1

int win_jud(int goban[][14], int a, int b)
{

    int l,m;
    int count_yoko = 0;
    int count_yoko2 = 0;
    int count_tate = 0;


    
    /*横の勝利条件*/
    while( b > 0 && b < N - 1){
        /*黒yoko count*/
        if(goban[a][b] == goban[a][b + 1] && goban[a][b] == 1){
            count_yoko += 1;
            b += 1;
        }else if(goban[a][b] == goban[a][b - 1] && goban[a][b] == 1 ){
            count_yoko += 1;
            b -= 1;
        }

        /*白yoko count*/
        if(goban[a][b] == goban[a][b + 1] && goban[a][b] == -1){
            count_yoko2 += 1;
            b += 1;
        }else if(goban[a][b] == goban[a][b - 1] && goban[a][b] == -1 ){
            count_yoko2 += 1;
            b -= 1;
        }

    }


    if(count_yoko == 5){
        return 1;
    }
    
    return 0;


}