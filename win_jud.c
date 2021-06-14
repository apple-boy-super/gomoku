#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 13 + 1

int win_jud(int goban[][14], int a, int b)
{    

    int count1 = 0,count2 = 0,count3 = 0,count4 = 0;
    int cnt1 = 0,cnt2  = 0,cnt3 = 0,cnt4 = 0;
    int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0;
    int ct5 = 0, ct6 = 0, ct7 = 0, ct8 = 0;

    int s,t;
    int keep;

    s = a;
    t = b;

/*横の勝利条件*/
    /*黒のカウント*/
        while(b < 13){
            if(goban[a][b] == goban[a][b + 1] && goban[a][b] == 1){
                count1++; 
                b++;
            }else{
                count1 = 0;
                b++;
            }
            if(count1 == 4){
                break;
            }
        }

        a = s;
        b = t;

        while(b > 1){
            if(goban[a][b] == goban[a][b - 1] && goban[a][b] == 1){
                count2++; 
                b--;
            }else{
                count2 = 0;
                b--;
            }
            if(count2 == 4){
                break;
            }
        }

        a = s;
        b = t;

    /*白のカウント*/
        while(b < 13){
            if(goban[a][b] == goban[a][b + 1] && goban[a][b] == -1){
                count3++; 
                b++;
            }else{
                count3 = 0;
                b++;
            }
            if(count3 == 4){
                break;
            }
        }

        a = s;
        b = t;

        while(b > 1){
            if(goban[a][b] == goban[a][b - 1] && goban[a][b] == -1){
                count4++; 
                b--;
            }else{
                count4 = 0;
                b--;
            }
            if(count4 == 4){
                break;
            }
        }

/*縦の勝利条件*/
    /*黒のカウント*/
        a = s;
        b = t;
        while(a < 13){
            if(goban[a][b] == goban[a + 1][b] && goban[a][b] == 1){
                cnt1++; 
                a++;
            }else{
                cnt1 = 0;
                a++;
            }
            if(cnt1 == 4){
                break;
            }
        }

        a = s;
        b = t;

        while(a > 1){
            if(goban[a][b] == goban[a - 1][b] && goban[a][b] == 1){
                cnt2++; 
                a--;
            }else{
                cnt2 = 0;
                a--;
            }
            if(cnt2 == 4){
                break;
            }
        }

        a = s;
        b = t;

    /*白のカウント*/
        while(a < 13){
            if(goban[a][b] == goban[a + 1][b] && goban[a][b] == -1){
                cnt3++; 
                a++;
            }else{
                cnt3 = 0;
                a++;
            }
            if(cnt3 == 4){
                break;
            }
        }

        a = s;
        b = t;

        while(a > 1){
            if(goban[a][b] == goban[a - 1][b] && goban[a][b] == -1){
                cnt4++; 
                a--;
            }else{
                cnt4 = 0;
                a--;
            }
            if(cnt4 == 4){
                break;
            }
        }

/*ななめの勝利条件*/
    /*黒のカウント*/
        a = s;
        b = t;
        /*右下*/
        while(a < 13 && b < 13){
            if(goban[a][b] == goban[a + 1][b + 1] && goban[a][b] == 1){
                ct1++; 
                a++;
                b++;
            }else{
                ct1 = 0;
                a++;
                b++;
            }
            if(ct1 == 4){
                break;
            }
        }

        a = s;
        b = t;
        /*左上*/
        while(a > 1 && b > 1){
            if(goban[a][b] == goban[a - 1][b - 1] && goban[a][b] == 1){
                ct2++; 
                a--;
                b--;
            }else{
                ct2 = 0;
                a--;
                b--;
            }
            if(ct2 == 4){
                break;
            }
        }

        a = s;
        b = t;
        /*右上*/
        while(a > 1 && b < 13){
            if(goban[a][b] == goban[a - 1][b + 1] && goban[a][b] == 1){
                ct3++; 
                a--;
                b++;
            }else{
                ct3 = 0;
                a--;
                b++;
            }
            if(ct3 == 4){
                break;
            }
        }

        a = s;
        b = t;

        /*左下*/
        while(a < 13 && b > 1){
            if(goban[a][b] == goban[a + 1][b - 1] && goban[a][b] == 1){
                ct4++; 
                a++;
                b--;
            }else{
                ct4 = 0;
                a++;
                b--;
            }
            if(ct4 == 4){
                break;
            }
        }

        a = s;
        b = t;

    /*白のカウント*/
        /*右下*/
        while(a < 13 && b < 13){
            if(goban[a][b] == goban[a + 1][b + 1] && goban[a][b] == -1){
                ct5++; 
                a++;
                b++;
            }else{
                ct5 = 0;
                a++;
                b++;
            }
            if(ct5 == 4){
                break;
            }
        }

        a = s;
        b = t;
        /*左上*/
        while(a > 1 && b > 1){
            if(goban[a][b] == goban[a - 1][b - 1] && goban[a][b] == -1){
                ct6++; 
                a--;
                b--;
            }else{
                ct6 = 0;
                a--;
                b--;
            }
            if(ct6 == 4){
                break;
            }
        }

        a = s;
        b = t;
        /*右上*/
        while(a > 1 && b < 13){
            if(goban[a][b] == goban[a - 1][b + 1] && goban[a][b] == -1){
                ct7++; 
                a--;
                b++;
            }else{
                ct7 = 0;
                a--;
                b++;
            }
            if(ct7 == 4){
                break;
            }
        }

        a = s;
        b = t;

        /*左下*/
        while(a < 13 && b > 1){
            if(goban[a][b] == goban[a + 1][b - 1] && goban[a][b] == -1){
                ct8++; 
                a++;
                b--;
            }else{
                ct8 = 0;
                a++;
                b--;
            }
            if(ct8 == 4){
                break;
            }
        }

        if(count1 + count2 >=4 || count3 + count4 >= 4){
            return 1;
        }else if(cnt1 + cnt2 >=4 || cnt3 + cnt4 >= 4){
            return 1;
        }else if(ct1 + ct2 >=4 || ct3 + ct4 >=4 || ct5 + ct6 >=4 || ct7 + ct8 >= 4){
            return 1;
        }else{
            return 0;
        }


}