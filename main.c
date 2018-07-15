/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main() {
    
    
    int r,s,i,j,k=0,m,n,a[3][3],b[3][3];
    
    printf("enter no of rows and columns");
    scanf("%d %d",&m,&n);
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            printf("Enter value for a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }
     for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
               
               if(a[i][j]==0)
               {
                   r=i;
                   s=j;
                }
                   for(int q=0;q<m;q++)
                   b[r][q]=0;
                   for(int p=0;s<n;s++)
                   b[s][p]=0;
               
        }
    }
         for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
          
         printf("%d \t",b[i][j]);      
        }
    }
    return 0;
}
