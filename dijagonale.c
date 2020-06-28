#include <stdio.h>
#define MAX 100

main()
{
    
     int i,j,n,mat[MAX][MAX],sgd,ssd;
      printf("Matrica je nxn, unesite n: ");
      scanf("%d", &n);
      
       printf("uneta  matrica: \n");
      for(i=0;i<n;i++)
      for(j=0;j<n;j++)
      {printf("element [%d] [%d]: ", i,j);
      scanf("%d", &mat [i][j]); }
      
     printf("uneta matrica: \n");
      for(i=0;i<n;i++)
     { for(j=0;j<n;j++)
      printf("% d ", mat[i][j]);
      printf("\n");}
      
      printf("elementi glavne dijagonale: ");
      for(i=0;i<n;i++)
      {
                      printf("%d, ", mat[i][i]);
                      
                      sgd+=mat[i][i];
                      }
                      printf("\nsuma glavne dijagonale: %d", sgd);
                      printf("\nelementi sporedne dijagonale: ");
                      for(j=0;j<n;j++)
                      {printf("%d, ", mat[j][n-j-1]);
                      ssd+=mat[j][j];}
                      printf("\nsuma sporedne dijagonale je %d.", ssd);
                      
     
    
                       getche();
                       return 0;
                       
                       }

