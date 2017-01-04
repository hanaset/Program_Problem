/*

작성자 : 손정빈 
작성일 : 2017. 01. 03 

피보나치 수열의 각 항은 바로 앞의 항 두 개를 더한 것이 됩니다. 1과 2로 시작하는 경우 이 수열은 아래와 같습니다.

    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... 

짝수이면서 4백만 이하인 모든 항을 더하면 얼마가 됩니까?

*/

#include <stdio.h>

int main(){
	int first = 1, second = 2;
	int temp, result = 0;
	
	while(second < 4000000){
		if(second % 2 == 0){
			result += second;
		}
		temp = first + second;
		
		first = second;
		second = temp;
	}
	
	printf("%d\n",result);
}
