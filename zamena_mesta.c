#include <stdio.h>
#define MAX 100

main()
{
     
     int i,j,n,mat[MAX][MAX],s=0,k1,k2,pom;
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
     do
     {printf(" redni broj kolona za zamenu: ");
     scanf("%d %d", &k1, &k2);
     }
     while (k1<1 || k1>n || k2<1 || k2>n);
     for(i=0;i<n;i++)
     {
                     pom=mat[i][k1-1];
                     mat[i][k1-1]=mat[i][k2-1];
                     mat[i][k2-1]=pom;}
                     printf("nova matrica je: \n");
                       for(i=0;i<n;i++)
     { for(j=0;j<n;j++)
     printf("%d ", mat[i][j]);
     printf("\n");}
                     
     
  
      
     
    
                       getche();
                       return 0;
                       
                       }

