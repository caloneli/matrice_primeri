#include <stdio.h>
#define MAX 100

main()
{
     
     int x,i,j,n,a[MAX][MAX],b[MAX][MAX],s=0;
      printf("Matrica A je nxn, unesite n: ");
      scanf("%d", &n);
      printf("x= ");
      scanf("%d",&x);
       printf("uneta  matrica: \n");
      for(i=0;i<n;i++)
      for(j=0;j<n;j++)
      {printf("element [%d] [%d]: ", i,j);
      scanf("%d", &a [i][j]); }
     
      printf("ovako izgleda matrica:\n");
      for(i=0;i<n;i++)
     { for(j=0;j<n;j++)
     printf("%d ", a[i][j]);
     printf("\n");
     }
     
     
     for(i=0;i<n;i++)
     for(j=0;j<n;j++)
{     if(i>j) a[i][j]+=x;
     if (i<j) a[i][j]=a[i][j]+2*x;}
     printf("nova matrica u kojoj su ispod glavne dijagonale dodati x, a iznad glavne dijagonale dodati 2*x \n");
     for(i=0;i<n;i++)
     { for(j=0;j<n;j++)
     printf("%d ", a[i][j]);
     printf("\n");
     }
     
     

      
     
    
                       getche();
                       return 0;
                       
                       }

