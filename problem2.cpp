/*

�ۼ��� : ������ 
�ۼ��� : 2017. 01. 03 

�Ǻ���ġ ������ �� ���� �ٷ� ���� �� �� ���� ���� ���� �˴ϴ�. 1�� 2�� �����ϴ� ��� �� ������ �Ʒ��� �����ϴ�.

    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... 

¦���̸鼭 4�鸸 ������ ��� ���� ���ϸ� �󸶰� �˴ϱ�?

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
