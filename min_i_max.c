#include <stdio.h>
#define MAX 100

main()
{
     
     int i,j,n,a[MAX][MAX],minv[MAX],maxv[MAX],mink[MAX],maxk[MAX];
      printf("Matrica je nxn, unesite n: ");
      scanf("%d", &n);
      
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
    
    for (i=0;i<n;i++)
    {
        minv[i]=a[i][0];
        maxv[i]=a[i][0];
        mink[i]=a[0][i];
        maxk[i]=a[0][i];
        for(j=1;j<n;j++)
        {
                        if(a[i][j]<minv[i]) minv[i]=a[i][j];
                        if(a[i][j]>maxv[i]) maxv[i]=a[i][j];
                        if(a[j][i]<mink[i]) mink[i]=a[j][i];
                        if(a[j][i]>maxk[i]) maxk[i]=a[j][i];
                        }
                        }
    printf("najveci u vrstama ");
        for (i=0;i<n;i++)
        printf("%d ", maxv[i]);
            printf("najmanji u vrstama ");
        for (i=0;i<n;i++)
        printf("%d " , minv[i]);
            printf("\nnajveci u kolonama ");
        for (i=0;i<n;i++)
        printf("%d " , maxk[i]);
            printf("najmanji u kolonama ");
        for (i=0;i<n;i++)
        printf("%d " , mink[i]);
    
    
  /*  for(i=0;i<i+1;i++)
    {for(j=0;j<n;j++)
    if (mat[i][j]>pom)
    pom=mat[i][j];
    if (mat[i][j]<pomin)
    pomin=mat[i][j];}
    
    printf("\n najveci je %d, a najmanji je %d", pom,pomin);
    */
      
     
    
                       getche();
                       return 0;
                       
                       }

