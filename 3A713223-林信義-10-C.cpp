#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num,j;
	
	printf("�п�J�@�ӼƦr:");
	scanf("%d",&num);
	
	printf("���Ʀr����]�Ƭ�");
	j=2; 
	
	while(num>1){
	    while(num%j==0){
	    	printf("%d ",j);
	    	num=num/j;
		}	
		j++;
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
