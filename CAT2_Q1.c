#include<stdio.h>
int main() {
	//define and initialize the 2D array 
	int scores [4][2]= {
	    {65, 92},
	    {84, 72},
	    {35, 70},
	    {59, 67}
	};
	 
//print all elements using anested for loop
  printf("Elements of the array are: \n");
   for (int i=0;i<4;i++){     // 4 rows
    for(int j =0;j<2;j++) {  //2 collumns
     printf("%d\t",scores[i][j]);
    }
    printf("\n");
   } 
  return 0;

	}
	
