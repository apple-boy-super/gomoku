#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int win_jud(int goban[][14], int a, int b);

#define N 13 + 1

int main()
{
    int goban[N][N] = {};
    int s,t;
    int x,y;
    int flag=0;
    int result=0;
    int i;

    /*データの入力*/
    while(flag != 2){

        if(flag == 0){

            printf("Do Black Input(x y) =>");
            scanf("%d %d",&x,&y);

            goban[x][y] = 1;


    /*データの出力*/
            for( i = 1; i < N; i++ ){
                printf(" %2d ",i);
            }
            printf("\n");

            for(s = 1; s < N; s++){
                printf("%2d",s);
                for(t = 1; t < N; t++){
                    switch(goban[s][t]){
                        case 1:     printf("| O "); break;
                        case -1:    printf("| X "); break;
                        case 0:     printf("|   "); break;       
                    }
                }
                    printf(" | ");
                    printf("\n");
            }

                flag = 1;

    /*win_jud関数*/
            result = win_jud(goban, x, y);
            if(result == 1){
                flag = 2;
                printf("Winnnnnnnnnnnnnnnnnnnnnner maruuuuuuuuuuuuuuuuuuuuuuuu\n");
            }
    /*_______________________________________________________________________________________________*/

        }else if(flag == 1){

    /*データの入力*/
            printf("Do Whiete Input(x y) =>");
            scanf("%d %d",&x,&y);
        
            goban[x][y] = -1;
    /*データの出力*/

            for( i = 1; i < N; i++ ){
                printf(" %3d",i);
            }

            printf("\n");

            for(s = 1; s < N; s++){
                printf("%2d",s);
                for(t = 1; t < N; t++){
                    switch(goban[s][t]){
                        case 1:     printf("| O "); break;
                        case -1:    printf("| X "); break;
                        case 0:     printf("|   "); break;       
                    }
                }
                printf(" | ");
                printf("\n");
            }

                flag = 0;
        
    /*win_jud関数*/
            result = win_jud(goban, x, y);        
            if(result == 1){
                flag = 2;
                printf("Winnnnnnnnnnnnnnnnnnnnnner batuuuuuuuuuuuuuuuuuuuuuuu\n");
                }
        }
    }
    return 0;

}
