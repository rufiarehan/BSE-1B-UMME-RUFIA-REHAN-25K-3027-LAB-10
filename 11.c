#include <stdio.h>
#include<string.h>

int main(){
	int i,j;
char fn[4][10]={"apple","banana","grapes","kiwi"};

 for (i=0;i<4;i++)
 {
	
		puts(fn[i]);
     for(j=0;fn[i][j]!='\0';j++){
     	printf("%c \n",fn[i][j]);
	 }
}
}
