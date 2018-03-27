#include<stdio.h>
void swap(int* pa ,int* pb);

int main(void)
{

	
	// 1.두 값에 차이
	int ary[]   = { 1,2,3,4,5 };
	int ary1[5] = { 1,2,3,4,5 };



	



	return 0;

}

void swap(int* pa, int* pb)
{

	int temp = 0;
	int a;


	temp = *pa;
	pa   = *pb; // <-- 2. pa 값이 *pa값이 되어야 하는 이유
	pb   = *pa; // <-- 3. 오류(우변항)


	//3. 함수 안에서 오류값 찾는 방법 (main 함수로 출력하지 않고)


}


