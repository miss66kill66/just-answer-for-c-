#include <stdio.h>
int step = 0; 
void hanio(int n,char A,char B,char C)
{
	if(n == 0){
		return ;
	}
	hanio(n-1,A,C,B);
	printf("%c ---> %c\n",A,C);
	step++;
	hanio(n - 1,B,A,C);
	return ;
}

int main(){
	int n;
	scanf("%d",&n);	
	hanio(n,'A','B','C');
	printf("step = %d\n",step);
	return 0;
}
