#include <stdio.h>
#define MAX 100

void Citaj(int mat[MAX][MAX], int n, int m)
{
     int i,j;
     for (i=0;i<n;i++)
          for(j=0;j<m;j++)
                {
                     printf("element [%d][%d] = ", i,j);
                     scanf("%d", &mat[i][j]);
                     }
}
void Pisi(int mat[MAX][MAX], int n,int m)
{
     int i,j;
     for (i=0;i<n;i++)
     {     for (j=0;j<m;j++)
     printf("%d ", mat[i][j]);
     printf("\n");}
}


main()
{
      int a[MAX][MAX], b[MAX][MAX];
      int c[MAX][MAX], d[MAX][MAX];
      int i,j,n,m,k,t;
      printf(" broj vrsta matrice A: ");
      scanf("%d", &n);
      printf(" broj kolona matrice A: ");
      scanf("%d", &m);
      printf(" broj kolona matrice B: ");
      scanf("%d", &k);
      printf("matrica A: ");
      Citaj(a,n,m);
      printf("matrica B: ");
      Citaj(b,m,k);
      for(i=0;i<n;i++)
      for(j=0;j<n;j++)
      {
                      c[i][j]=0;
                      for(t=0;t<m;t++)
                      c[i][j]=c[i][j]+a[i][t]*b[t][j];
                      }
                      printf("\nmatrica a:\n");
                      Pisi(a,n,m);
                      printf("\nmatrica b:\n");
                      Pisi(b,m,k);  
                      printf("\nmatrica c:\n");
                      Pisi(c,n,k);
      

     
    
                       getche();
                       return 0;
                       
                       }

