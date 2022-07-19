#include<stdio.h>
#include<conio.h>

void main(){
    
    int m1 =[[1, 2, 3], [4, 5, 6],[7, 8, 9]];
    int m2 =[[1, 2, 3], [4, 5, 6],[7, 8, 9]];
    int r;

    for(int i = 0 ; i <3 ; i+){
        for(int j = 0; j<3; j++){
            for(int k = 0; k < 3; k++){
                r[i,j] += m1[k,j] * m2[i,k];
            }
        }
    }

}