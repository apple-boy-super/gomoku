#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 13 + 1

int win_jud(int goban[][14], int a, int b)
{    

    int count1 = 0,count2 = 0;
    int count3 = 0,count4 = 0;
    int x,y;

    x = a;
    y = b;

/*横の勝利条件*/
    /*黒のカウント*/
        while(b < 13){
            if(goban[a][b] == goban[a][b + 1] && goban[a][b] == 1){
                count1 += 1; 
                b += 1;
            }else{
                //count1 = 0;
                b += 1;
            }
        }

        while(b > 1){
            if(goban[a][b] == goban[a][b - 1] && goban[a][b] == 1){
                count2 += 1; 
                b -= 1;
            }else{
                //count2 = 0;
                b -= 1;
            }
        }

    /*白のカウント*/
        while(y < 13){
            if(goban[x][y] == goban[x][y + 1] && goban[x][y] == -1){
                count3 += 1; 
                y += 1;
            }else{
                //count3 = 0;
                y += 1;
            }
        }

        while(y > 1){
            if(goban[x][y] == goban[x][y - 1] && goban[x][y] == -1){
                count4 += 1; 
                y -= 1;
            }else{
                //count4 = 0;
                y -= 1;
            }
        }

        if(count1 + count2 >=4 || count3 + count4 >= 4){
            return 1;
        }else{
            return 0;
        }

}