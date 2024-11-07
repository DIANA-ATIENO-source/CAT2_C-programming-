//program to define and initialise 2D arrays scores
#include<stdio.h>
int main(){
	int a;
	int b;
	int scores[4][2]={{65,92},{35,70},{84,72},{39,67}};
	for(a=0;a<4;a++){
		for(b=0;b<2;b++){
			printf("scores[%d][%d]=%d\n",a,b,scores[a][b]);
		}
		
		
	}
	
	return 0;	
}




















