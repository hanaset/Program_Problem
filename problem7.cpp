/*
�ۼ���:������
�ۼ�����:2017.01.11

 

�Ҽ��� ũ�� ������ �����ϸ� 2, 3, 5, 7, 11, 13, ... �� ���� �˴ϴ�.

�� �� 10,001��°�� �Ҽ��� ���ϼ���.

*/

#include <stdio.h>

int main(){
	int count = 0;
	int i = 2, j;
	int check = 0;
	
	while(1){
		
		check = 0;
		for(j=1;j<i;j++){
			if(i%j==0)
				check++;
				
			if(check>1)
				break;
		}
		
		if(check == 1)
			count++;
			
		if(count == 10001)
			break;
			
		i++;
		
	}
	
	printf("%d",i);
} 
