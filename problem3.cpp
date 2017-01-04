/*
작성자 : 손정빈
작성일자 : 2017.01.04



어떤 수를 소수의 곱으로만 나타내는 것을 소인수분해라 하고, 이 소수들을 그 수의 소인수라고 합니다.
예를 들면 13195의 소인수는 5, 7, 13, 29 입니다.

600851475143의 소인수 중에서 가장 큰 수를 구하세요.

*/

#include <stdio.h>

int main(){
	unsigned long long i, j, k, result;
	int count = 0;
	
	
	j = 600851475143;
	i=2;
	
	while(1){
		
		for(k=2;k<=i;k++){
			
			if(i%k==0){
				count++;
			}
			
		}
		
		if(count == 1){
				if(j%i!=0){
				i++;
			}else if(j%i == 0){
				j = j/i;
			}
		}else{
			i++;
		}
		count = 0;
		
		
		if(j == 1){
			printf("%d\n",i);
			break;
		}
	}
	
} 
