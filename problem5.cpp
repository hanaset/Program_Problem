/*
�ۼ���: ������
�ۼ���: 2017.01.09



1 ~ 10 ������ � ���ε� ������ �������� ���� ���� ���� 2520�Դϴ�.

�׷��� 1 ~ 20 ������ � ���ε� ������ �������� ���� ���� ���� ���Դϱ�?

*/ 

#include<stdio.h>

int main(){
	
	int check[20] = {0,};
	int check2[20] = {0,};
	
	int i, j, temp;
	
	long long result = 1;
	
	for(i=2;i<=20;i++){
		
		j = 2;
		temp = i;
		while(1){
				
			if(temp % j != 0)
				j++;
			else{
				temp = temp/j;
				
				check[j-1]++;
			}
			if(j>i)
					break;
		}
		
		for(j=0;j<20;j++){
			if(check[j]>= check2[j]){
				check2[j] = check[j];
			}
			
			check[j] = 0;
		}
	}
	
	for(i=1;i<20;i++){
		for(j=0;j<check2[i-1];j++){
			result *= i;	
		}
		
		
		
	}
	
	printf("%lld\n",result);
	
}
