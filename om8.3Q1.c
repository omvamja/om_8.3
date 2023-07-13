// Q[1]

#include<stdio.h>

void main()
{
	int i,j;
	
	float avg,sum=0;
	
	printf("enter array s row size:-");
	scanf("%d",&i);
	printf("enter array s colum size:-");
	scanf("%d",&j);	
	int array[i][j];
	int r,c;
	
	for(r=0;r<i;r++){
		for(c=0;c<j;c++)
		{
		    printf("array[%d][%d] = ",r,c);	
			scanf("%d",&array[r][c]);
		sum=sum+array[r][c];		
		}
	}avg=sum/(j*i);
	
	
			
				printf("%f",avg);
	}
	
	






