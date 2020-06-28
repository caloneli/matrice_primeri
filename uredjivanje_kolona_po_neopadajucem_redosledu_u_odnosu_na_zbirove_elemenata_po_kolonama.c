#include <stdio.h>
#define MAX 100

main()
{
     
     int i,j,n,m,mat[MAX][MAX],s[MAX],p,min;
      printf("Matrica je mxn, unesite n: ");
      scanf("%d", &m);

      printf("Matrica je mxn, unesite n: ");
      scanf("%d", &n);
            
       printf("uneta  matrica: \n");
      for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      {printf("element [%d] [%d]: ", i,j);
      scanf("%d", &mat [i][j]); }
     
      printf("ovako izgleda matrica:\n");
      for(i=0;i<m;i++)
     { for(j=0;j<n;j++)
     printf("%d ", mat[i][j]);
     printf("\n");
     }
     
     //racunanje zbira elemenata po kolonama
     for(j=0;j<n;j++)
     for(s[j]=i=0;i<m;i++)
     s[j]+=mat[i][j];
     //uredjivanje kolona po velicinama zbirova
     for(i=0;i<n-1;i++)
     {
                       //trazenje najmanjeg zbira
                       for(min=1,j=i+1;j<n;j++)
                       if(s[j]<s[min]) min=j;
                       if(min!=i)
                       {
                                 p=s[i];
                                 s[i]=s[min];
                                 s[min]=p;
                                 //zamena kolona
                                 for(j=0;j<n;j++)
                                 {p=mat[j][i]=mat[j][min];
                                 mat[j][min]=p;
                                 }
                                 }
                                 }
                                 //ispisivanje uredjene matrice
                                 printf("uredjena matrica: \n");
                                 for(i=0;i<m;i++)
                                 {
                                                 for(j=0;j<n;j++)
                                                 printf(" %d", mat[i][j]);
                                                 printf("\n");
                                                 }
                                                 printf("\n suma po kolonama: \n");
                                                 for(j=0;j<n;j++)
                                                 printf(" %d", s[j]);
                                                 
     
                       getche();
                       return 0;
                       
                       }


     
