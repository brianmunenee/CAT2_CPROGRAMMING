// 2D ARRAY
/*
AUTHOR :BRIAN MUNENE
REG NO : CT101/G/21785/24
DATE ;7/11/2024
*/

# include <stdio.h>
int main (){
	
	int i,m;
	
	int scores [2][4] ={
	{65,92,84,72},
	{35,70,59,67}
	};
	
	
	for (int i=0;i<2;i++){
		for (int m =0;m <4;m++){
			 printf("scores [%d][%d] = %d\n",i,m,scores[i][m]);
		}
	}
	return 0;
}