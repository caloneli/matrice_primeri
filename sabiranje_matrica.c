#include <stdio.h>
#define MAX 100

main()
{
    int i,j,m,n,mat1[MAX][MAX],mat2[MAX][MAX];
      printf("unesite broj vrsta= ");
      scanf("%d", &m);
      printf("Unesite broj kolona= ");
      scanf("%d", &n);
      
       printf("uneta prva matrica: \n");
      for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      scanf("%d", &mat1[i][j]);
      
       printf("uneta druga matrica: \n");
      for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      scanf("%d", &mat2[i][j]);
      
      printf("zbir ove dve matrice: \n");
      for(i=0;i<m;i++)
      {
                      for (j=0;j<n;j++)
                      printf("%d ", mat1[i][j]+mat2[i][j]);
                      printf("\n");
}
    
                       getche();
                       return 0;
                       
                       }

