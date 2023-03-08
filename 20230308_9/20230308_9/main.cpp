/**********************************
*  파일 이름 :main.c
*  설명      :두수의 합을 구하는 시스템입니다.
*  작성자    :연 지 민
*  작성일자  :2023.03.08
***************/
#include <stdio.h> //전처리 header file
int main(void)  //메인 함수
{

	int x;  //변수(varidable) 선언(define)
	int y; //변하지 않는 수는 상수
	int sum;

	//itn x, y, sum;

	x = 3; //연산
	y = 7; 
    //////////////////////덧셈//////////////////////////
	sum = x + y;
	printf("두수의 합: %d \n",sum ); //출력
		
		//////뺄셈/////
	
	sum = x - y;
		printf("두수의 차: %d \n", sum);
		//
	
		sum = x * y;
		printf("두수의 곱: %d \n", sum); 

		//
		sum = x / y;
		printf("두수의 나누기: %f \n", sum); //출력

		//

		sum = x % y;
		printf("x에 y를 나눈 나머지: %d \n", sum); //출력


		; return 0; //함수 값 변환






}

