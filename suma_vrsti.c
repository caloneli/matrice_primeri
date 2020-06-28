#include <stdio.h>
#define MAX 100

main()
{
     
     int i,j,n,mat[MAX][MAX],s=0;
      printf("Matrica je nxn, unesite n: ");
      scanf("%d", &n);
      
       printf("uneta  matrica: \n");
      for(i=0;i<n;i++)
      for(j=0;j<n;j++)
      {printf("element [%d] [%d]: ", i,j);
      scanf("%d", &mat [i][j]); }
     
      printf("ovako izgleda matrica:\n");
      for(i=0;i<n;i++)
     { for(j=0;j<n;j++)
     printf("%d ", mat[i][j]);
     printf("\n");
     }
     
     printf("suma elemenata svake vrste: \n");
     for(i=0;i<n;i++)
     {for(j=0;j<n;j++)
     s+=mat[i][j];
     printf("%d, ", s);
     s=0;
     }
      
     
    
                       getche();
                       return 0;
                       
                       }

