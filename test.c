#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// ����������ƽ����
// �Ѵ�ı�С�Ķ������һ���� ��һ���С�� ����ƽ��ֵ
int main1(){
	// INT_MAX = 2147483647;
	// ��a , b ��������ֵʱ, ���Ϊ-2 => �������,�����㷨������
	/*int a = 2147483646;
	int b = 2147483646;*/
	int a = 20;
	int b = 10;
	//int avg = (a + b) / 2;// �����㷨������, ����������
	int avg = a + (b - a) / 2;// ����������
	printf("%d\n", avg);
	system("pause");
	return 0;
}

int main(){
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (i = 0; i <= 12; i++){
		arr[i] = 0;
		printf("hehe\n");
	}
	system("pause");
	return 0;
}