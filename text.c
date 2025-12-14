//#include <stdio.h>
//#include <inttypes.h>
//#include <float.h>
//int32_t main() {
//	//欧里几得算法代码实现----------------------------------------------
//	int32_t myFirstNumber;
//	int32_t mySecondNumber;
//	int32_t gcd(int32_t x, int32_t y);
//
//	printf("Please enter a integer number(1/2):\n");
//	scanf_s("%d",&myFirstNumber);
//	printf("Please enter a integer number(2/2):\n");
//	scanf_s("%d",&mySecondNumber);
//
//	printf("The recursive is: %d",gcd(myFirstNumber, mySecondNumber));
//
//
//	return 0;
//}
//int32_t gcd(int32_t x, int32_t y) {
//	int32_t temp = 0;
//	while (y != 0){
//		temp = y;
//		y = y % x;
//		x = temp;
//	}
//	return x;
//}------------------------------------------------------------------
// error>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//int32_t main() {
//	int32_t* arr[10];
//
//	for (int32_t i = 0; i < 10; i++) {
//		printf("Please neter 10 num %d: ", i + 1);
//		scanf_s("%d",arr);
//	}
//
//	for (int32_t j = 0; j < 9; j++) {
//		for (int32_t i = 0; i < 9 - j; i++) {
//
//			if (arr[i] < arr[i + 1]) {
//				int32_t temp = 0;
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = arr[i];
//			}
//		}
//	}
//	for (int32_t i = 0; i < 10; i++) {
//		printf("%d ",arr);
//	}
//	return 0;
//}