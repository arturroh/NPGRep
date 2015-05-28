#include<stdio.h>
#define ROW 4
#define COL 4

main()
{
float macierz[ROW][COL]={
      {5,3,1,7},
      {1,3,4,-2},
      {2,-2,-1,4}, 
      {2,-3,6,2},
      };

      

int i=1,j=0,k,x,y;     
    float l,wyznacznik=1.0;  
for(k=0;k<ROW-1;k++)
     {for(x=i;x<ROW;x++)
     	{l=macierz[x][j]/macierz[k][k];
     	 for(y=0;y<ROW;y++)
     	 	 {
     	 	 	macierz[x][y]=macierz[x][y]-l*macierz[k][y];
     	 	 	
     	 	 }
			
     	 	 
     	}
     	
     	
     	i++;j++;
     	
     }

j=0;
for(i=0;i<ROW;i++)
      {wyznacznik=wyznacznik*macierz[i][j];
       j++;

       }
    
            
for(i=0;i<ROW;i++)
      {printf("\n");
    for(j=0;j<COL;j++)
      {printf("%3.1f ",macierz[i][j]);}
        
      }  
printf("\n");
printf("\n");
printf("wyznacznik wynosi: %f \n", wyznacznik);
}
      

