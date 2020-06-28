#include <stdio.h>
#define MAX 100

void Citaj(int mat[MAX][MAX], int n)
{
     int i,j;
     for (i=0;i<n;i++)
          for(j=0;j<n;j++)
                {
                     printf("element [%d][%d] = ", i,j);
                     scanf("%d", &mat[i][j]);
                     }
}
void Pisi(int mat[MAX][MAX], int n)
{
     int i,j;
     for (i=0;i<n;i++)
     {     for (j=0;j<n;j++)
     printf("%d ", mat[i][j]);
     printf("\n");}
}
void Transp (int mat[MAX][MAX], int n)
{ 
     int i,j,pom;
          for (i=0;i<n-1;i++)
               for (j=i+1;j<n;j++)
               {pom=mat[i][j];
               mat[i][j]=mat[j][i];
               mat[j][i]=pom;}
}               


main()
{
 int i,j,n,pom,mat[MAX][MAX];
 printf("n=");
 scanf("%d", &n);
 printf("\n");
 Citaj(mat,n);
 printf("zadata matrica: \n");
 Pisi(mat,n);
 Transp(mat,n);
 printf("transponovana matrica: \n");
 Pisi(mat,n);
      
     
    
                       getche();
                       return 0;
                       
                       }

