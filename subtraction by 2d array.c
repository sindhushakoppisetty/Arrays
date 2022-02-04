#include<stdio.h>
 void main()
{
	int rs,cs ; 
	printf("enter the row size & column size");
	scanf("%d%d",&rs,&cs);
	int a[rs][cs],i,j,subtract;
	printf("enter the elements in the array");
		for (i=0;i<rs;i++)
	{

	for (j=0;j<cs;j++)
   {
     scanf("%d",&a[i][j]);
 
 }
}
for (i=0;i<rs;i++)
{
	for(j=0;j<cs;j++)
{
	subtract = subtract-a[i][j];
}
printf("\n");

}
printf("%d",subtract);
}

