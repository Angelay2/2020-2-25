#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// 求两个数的平均数
// 把大的比小的多出来的一部分 的一半给小的 就是平均值
int main1(){
	// INT_MAX = 2147483647;
	// 当a , b 是以下数值时, 结果为-2 => 整形溢出,所以算法有问题
	/*int a = 2147483646;
	int b = 2147483646;*/
	int a = 20;
	int b = 10;
	//int avg = (a + b) / 2;// 这种算法有问题, 造成整形溢出
	int avg = a + (b - a) / 2;// 不会出现溢出
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