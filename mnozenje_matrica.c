#include <stdio.h>
#define MAX 100

main()
{
     
     int i,j,n,m,k,a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
      printf("Matrica A je nxm, unesite n: ");
      scanf("%d", &n);
            printf("Matrica A je nxm, unesite m: ");
      scanf("%d", &m);
      
       printf("uneta  matrica: \n");
      for(i=0;i<n;i++)
{      for(j=0;j<m;j++)
      {printf("element [%d] [%d]: ", i,j);
      scanf("%d", &a[i][j]); }}
     
printf("================================================\n");
      printf("    ovako izgleda matrica A:\n");
      for(i=0;i<n;i++)
     { for(j=0;j<m;j++)
     printf("%d ", a[i][j]);
     printf("\n");
     }
     
      printf("============================================\nMatrica B je mxk, unesite m: ");
      scanf("%d", &m);
            printf("Matrica B je mxk, unesite k: ");
      scanf("%d", &k);
      
       printf("uneta  matrica: \n");
      for(i=0;i<m;i++)
{      for(j=0;j<k;j++)
      {printf("element [%d] [%d]: ", i,j);
      scanf("%d", &a[i][j]); }}
     
printf("================================================\n");
      printf("    ovako izgleda matrica B:\n");
      for(i=0;i<m;i++)
     { for(j=0;j<k;j++)
     printf("%d ", a[i][j]);
     printf("\n");
     }
     
     
           getche();
                       return 0;
                       
                       }
