// Q [2]

#include<stdio.h>
void main (){
	int i,j,r,c;
	printf("enter the size of row = ");
	scanf("%d",&i);
	printf("enter the size of colum = ");
	scanf("%d",&j);
	
	int m[i][j];
	
	printf ("enter the  A elements");             
	for(r=0;r<i;r++){
		for(c=0;c<j;c++){
			printf ("m[%d][%d]=",r,c);
			scanf("%d",&m[r][c]);
		}
	}
	int o[i][j];
		for(r=0;r<i;r++){
		for(c=0;c<j;c++){
			printf ("o[%d][%d]=",r,c);
			scanf("%d",&o[r][c]);
		}
	}int d[i][j];
		for(r=0;r<i;r++){
		for(c=0;c<j;c++){
	 d[r][c]=m[r][c]+o[r][c];
			
			printf("%d",d[r][c]);
		}
		printf("\n");
	}

}

