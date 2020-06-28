#include <stdio.h>
#define MAX 100

main()
{
      int i,j,m,n,mat[MAX][MAX];
      printf(" vrsta m= ");
      scanf("%d", &m);
      printf(" kolona n= ");
      scanf("%d", &n);
      
      for(i=0; i<m; i++)
       for(j=0;j<n;j++)
       {
                       printf("element [%d][%d] = ",i,j);
                       scanf("%d", &mat[i][j]);
                       }
                       
       printf(" \n uneta matrica:\n");
       for(i=0;i<m;i++)
       {
                       for(j=0;j<n;j++)
                       printf("%d", mat[i][j]);
                       printf("\n");
                       }
                       getche();
                       return 0;
                       
                       }

