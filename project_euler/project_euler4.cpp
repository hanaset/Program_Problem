/*
�ۼ���: ������
�ۼ���: 2017.01.05


�տ������� ���� ���� �ڿ������� ���� ���� ����� ���� ���� ��Ī��(palindrome)��� �θ��ϴ�.

�� �ڸ� ���� ���� ���� �� �ִ� ��Ī�� �� ���� ū ���� 9009 (= 91 �� 99) �Դϴ�.

�� �ڸ� ���� ���� ���� �� �ִ� ���� ū ��Ī���� ���Դϱ�?

*/

#include <stdio.h>

int main(){
	
	int i = 800, j = 800;
	
	int result;
	int a;
	
	int test[6] = {0,};
	
	// 810000 ~ 1000000
	
	for(i=900;i<1000;i++){
		for(j=900;j<1000;j++){
			
			result = i*j;
			
			test[0] = result/100000;
			result = result % 100000;
			test[1] = result/10000;
			result = result % 10000;
			test[2] = result/ 1000;
			result = result % 1000;
			test[3] = result / 100;
			result = result % 100;
			test[4] = result / 10;
			result = result % 10;
			test[5] = result;
			
			if(test[0] == test[5] && test[1] == test[4] && test[2] == test[3]){
				a =i*j;	
			}
			
		}
	}
	
	printf("%d\n",a);
	
}
