#include<stdio.h>
void swap(int* pa ,int* pb);

int main(void)
{

	
	// 1.�� ���� ����
	int ary[]   = { 1,2,3,4,5 };
	int ary1[5] = { 1,2,3,4,5 };



	



	return 0;

}

void swap(int* pa, int* pb)
{

	int temp = 0;
	int a;


	temp = *pa;
	pa   = *pb; // <-- 2. pa ���� *pa���� �Ǿ�� �ϴ� ����
	pb   = *pa; // <-- 3. ����(�캯��)


	//3. �Լ� �ȿ��� ������ ã�� ��� (main �Լ��� ������� �ʰ�)


}


