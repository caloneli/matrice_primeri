#include <stdio.h>
#define MAX 100

main()
{
      int i,j,m,n,s=0,nule=0,mat[MAX][MAX];
      
      printf("unesite broj vrsta= ");
      scanf("%d", &m);
      printf("Unesite broj kolona= ");
      scanf("%d", &n);
      
      printf("uneta matrica: \n");
      for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      scanf("%d", &mat[i][j]);
      for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      {if(mat[i][j]%2==0)
      s=s+mat[i][j];
      if(mat[i][j]==0)
      nule=nule+1;}
      
      printf("suma svih parnih brojeva je %d \n", s);
      printf("u matrici ima %d nula", nule);
      
      
      
    
getche();
return 0;
                       
}

