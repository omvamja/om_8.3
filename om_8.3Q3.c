//Q [3]

#include<stdio.h>
void main (){
	
	int i,r,c,sum=0;
	
	printf("enter the size of row & colum :-");
	scanf("%d",&i);
	
	int m[i][i];
	
	printf("enter the  array s slements ");
	
	for(r=0;r<i;r++){
		for(c=0;c<i;c++){
			printf("a[%d][%d]",r,c);
			scanf("%d",&m[r][c]);
		}
	}
	
	for(r=0;r<i;r++){
		for(c=0;c<i;c++){
			if(r==c){
				sum=sum+m[r][c];
			}
		}
	}
	printf("the sum of diagonal is :%d",sum);
	
}                  
