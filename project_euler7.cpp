/*
작성자:손정빈
작성일자:2017.01.11

 

소수를 크기 순으로 나열하면 2, 3, 5, 7, 11, 13, ... 과 같이 됩니다.

이 때 10,001번째의 소수를 구하세요.

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
