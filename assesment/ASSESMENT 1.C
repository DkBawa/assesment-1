// 2 D ARRAY MATRIC MULTIPLICATION //
#include<stdio.h>
int main () {
	int a[2][2],b[2][2],c[2][2];
	int i,j,row,col,t,k;
	
	// take input form user to how many row and column want//
	printf("\nEnter No Of Rows :");
    scanf("%d",&row);
    
    printf("\nEnter No Of Columns :");
    scanf("%d",&col);
    // then we take input for matrix A //
    printf("\n Enter A Matrix :");
    for (i=0;i<row;i++) 
	{
			for (j=0;j<col;j++)
	{
		scanf("%d",&a[i][j]);
	}
} // using loop for print input arry //
 for (i=0;i<row;i++)
{
	for (j=0;j<col;j++) 
	{
		printf(" \t%d",a[i][j]);
	}
	printf("\n");
} 
//taking input for 2 metrix //
printf("\n Enter B Matrix :");
 for (i=0;i<row;i++) 
	{
			for (j=0;j<col;j++)
	{
		scanf("%d",&b[i][j]);
	}
} // using loop for print 2 matrix //
 for (i=0;i<row;i++)
{
	for (j=0;j<col;j++) 
	{
		printf(" \t%d",b[i][j]);
	}
	printf("\n");
}  // using loop for multiplection of Matrix  A * Matrix B
for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      t=0;
      for(k=0;k<col;k++)
      {
         t+=(a[i][k]*b[k][j]);
      }
      c[i][j]=t;
    }
  }
  // using printf for print result//
  printf("\nResult Matrix : \n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
       printf("\t%d",c[i][j]);
    }
    printf("\n");
  }
  return 0;
}


	
