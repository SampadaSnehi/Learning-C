#include <stdio.h>


int main(){
    int n, m;
    printf("Enter the dimensions of the matrix1");
    scanf("%d %d", &n , &m);
    int mat1[n][m];
    for( int i=0; i<n;i++){
        for (int j=0; j<m;j++){
            printf("enter %d %d value", i,j );
            scanf("%d",&mat1[i][j]);
        }
    }


    int k, l;
    printf("Enter the dimensions of the matrix2");
    scanf("%d %d", &k , &l);
    int mat2[k][l];
    for( int i=0; i<k;i++){
        for (int j=0; j<l;j++){
            printf("enter %d %d value", i,j );
            scanf("%d",&mat2[i][j]);
        }
    }
    int sol[n][l];
    if (m==k){
        for(int i=0; i<n;i++){
            for(int j=0; j<l ;j++){
                sol[i][j]=0;
                for(int z=0; z<m;z++){
                    sol[i][j]+= mat1[i][z]*mat2[z][j] ;
                }

            
            }
        }
    }

   for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", sol[i][j]);
        }
        printf("\n");
}}



