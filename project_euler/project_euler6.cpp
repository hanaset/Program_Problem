/*
�ۼ���:������
�ۼ�����:2017.01.10

 

1���� 10���� �ڿ����� ���� ������ ���ϸ� ������ �����ϴ� (������ ��).

    12 + 22 + ... + 102 = 385

1���� 10�� ���� ���� ������ �� ����� �����ϸ� ������ �����ϴ� (���� ����).

    (1 + 2 + ... + 10)2 = 552 = 3025

���� 1���� 10���� �ڿ����� ���� "���� ����"�� "������ ��" �� ���̴� 3025 - 385 = 2640 �� �˴ϴ�.

�׷��� 1���� 100���� �ڿ����� ���� "���� ����"�� "������ ��"�� ���̴� ���Դϱ�?

*/

#include <stdio.h>

int main(){
	unsigned long sum = 0, mul = 0;
	int i;
	
	for(i=1;i<=100;i++){
		sum += i;
		mul = mul + (i*i);
	}
	
	sum = sum*sum;
	
	printf("%d\n",sum-mul);

} 