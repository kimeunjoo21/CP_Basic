
#include <iostream> //Input/Output Stream

#define NUMBER 100

using namespace std;
// std::cout => cout


void DefineFunction(); //메인 뒤에 함수 정의 있다는것을 알려줌  -> 함수 원형


int main()
{
	//함수 호출
	DefineFunction();    //만들어준 이름인데 ()가 있으면 무조건 함수 / ()가 없으면 보통 변수   -> 함수 호출

	std::cout << "Hello World!\n";

	//std : standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	//cout << '300' + "\n";
	cout << 500 << endl; //endl : endline
	cout << NUMBER + 50 << endl;


	int Number1; // 변수 선언
	Number1 = 10; // 초기값 대입

	int Number2 = 10; // 변수 선언 및 초기화

	int Number3 = 1, Number4 = 2;

	Number3 = 5;

	// 심볼릭 상수(Constant)
	const int Number5 = 10;

	// Number5 = 30; //값을 수정할 수 없음

	// 정수형 타입(int : integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;

	// 실수형 타입(float)

	float Num10 = 1.234f;
	double Num11 = 1.234;

	//문자 데이터 : 문자(1개), 문자열(2개이상)
	//char : character
	//char 타입 문자 표현 : '' 사용

	bool Condition = true;

	//auto 선언 키워드
	auto AutoNum = 10;

	cout << Number1 << std::endl;

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// 증감 연산에는 반복 실행의 개념이 포함
	int Inc = 30;

	Inc = Inc + 3;
	cout << Inc << endl;

	Inc = Inc + 3;
	cout << Inc << endl;

	Inc = Inc + 3;
	cout << Inc << endl;

	Inc = Inc + 3;
	Inc += 3;

	Inc = Inc + 1;
	Inc += 1;
	Inc++;

	Inc--;

	Inc = Inc * 3;
	Inc *= 3;
	Inc /= 3;
	Inc %= 3;
	
	/* 
		비교 연산
		크기비교의 결과는 참/거짓 => 실제 출력 1/0
		true : 참 : 1
		false : 거짓 : 0

	*/

	int Compare1 = 10;
	int Compare2 = 20;

	// > 크다, < 작다 => 방향이 고정

	cout << (Compare1 > Compare2) << endl;
	cout << (Compare1 < Compare2) << endl;
	cout << (Compare1 >= 10) << endl;
	cout << (Compare1 == Compare2) << endl;
	cout << (Compare1 != Compare2) << endl;

	cout << ((Compare1 < Compare2) && (Compare1 < 50)) << endl;
	cout << !(Compare1 < Compare2) << endl;
	
	int Condition1 = 100;


	/*
		if가 포함하는 조건식의 원리
		:결과값이 bool 데이터
	 
		조건식의 종휴
		-비교연산식
		-bool 데이터
		-true -> 1 false-> 0
		-산술연산식
	*/


	if (Condition1 >= 50) {
		//참일 떄 실행구문
		cout << Condition1 << endl;
	}

	if (true) {}
	if (false) {}
	if(1){}
	if(0){}
	if(20){}
	int Condition2 = 10;        //0:false 이외의 정수:true 문자데이터도 true
	if(Condition2 + 5) {}
	if(Condition1 >=50 && Condition2<10){}

	/*
		if(조건식1){
			//조건식1이 참일 때 실행 구문
		}

		if(조건식2){
			//조건식2가 참일 때 실행 구문
		} else {
			//조건식2가 거짓일 때 실행 구문
		}

		if(조건식3){
			//조건식3이 참일 떄 실행구문
		}else if(조건식4){
			//조건식4가 참일 때 실행구문
		}else if(조건식5){
			//조건식5가 참일 떄 실행구문
		}else{
			//조건식이 모두 거짓일 떄 실행구문
		}

	*/

	/*
		A,B 두 수를 입력 받아 비교해서 결과 출력
		출력 : A>B
	*/

	
	int NumA = 0;
	int NumB = 0;
	//cin >> NumA;
	//cin >> NumB;

	if (NumA > NumB) {
		cout << ">" << endl;
	}
	else if (NumA < NumB) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}
	

	/*논리 연산 : bool 데이터 연산
		AND : && (ampersand)

		true && true : true
		true && false : false
		=> bool 데이터가 모두 true 일 때 결과가 true

		OR : || (pipe)
		false || true : true
		false || false : false
		=> bool 데이터 중 하나만 true 이면 결과가 true

		NOT : ! 
		!(false) => true
		bool 데이터의 결과값을 반대로 부정

	*/

	int NumTest = 0;
	
	//cin >> NumTest;

	if (NumTest >= 90) {
		cout << "A" << endl;
	}
	else if (NumTest >= 80) {
		cout << "B" << endl;
	}
	else if (NumTest >= 70) {
		cout << "C" << endl;
	}
	else if (NumTest >= 60) {
		cout << 'D' << endl;
	}
	else {
		cout << "F" << endl;
	}


	//상점에 도둑이 들었는데, 목격자가 인상착의를 말했다.
	//키는 약 180이상, 옷은 검정색 옷을 입고 있었다고 말했다.
	//범인을 찾는 조건문을 작성하시오.
	//옷색 입력값 : Black = B, White = W, Red = R ...


	int TallNumber = 0;
	char ClothColor = NULL;  //초기화 하지 않아도 되긴 함 / ' ' : 값이 있는것 / NULL 은 문자 값이 없는것

	//cin >> TallNumber;
	//cin >> ClothColor;

	//TallNumber >= 180
	//ClothColor == 'B' 

	
	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "범인" << endl;
	}
	else if (TallNumber >= 180 || ClothColor == 'B') {
		cout << "용의자" << endl;
	}
	else {
		cout << "시민" << endl;
	}
	

	/*
		180이상이고 검정색 옷 : 범인
		180이하이고 검정색 옷 : 용의자
		180이상이고 다른색 옷 : 용의자
		두 조건 모두 아니면 : 시김
	*/

	//중첩
	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "범인" << endl;
		}
		else {
			cout << "용의자" << endl;
		}
	}

	else {
		if (ClothColor == 'B') {
			cout << "용의자" << endl;
		}
		else {
			cout << "시민" << endl;
		}
	}

	

	/*
		switch ~ case

		switch가 포함하는 수식의 결과값
		:정수, 문자
		
		
		switch(수식){
			case 결과값1:
				실행구문1
			case 결과값2:
				실행구문2
			...
		}
	*/

	
	//요일 번호를 입력받아 해당 번호의 요일 이름 출력
	// 0 : 일요일 ~ 6 : 토요일

	int DayNum = 0;
	//cout << "요일번호를 입력해주세요 : ";
	//cin >> DayNum;
	switch (DayNum) {
		case 0:
			cout << "ㅋ요일" << endl;
			break;
		case 1:
			cout << "월요일" << endl;
			break;
		case 2:
			cout << "화요일" << endl;
			break;
		case 3:
			cout << "수요일" << endl;
			break;
		case 4:
			cout << "목요일" << endl;
			break;
		case 5:
			cout << "금요일" << endl;
			break;
		case 6:
			cout << "토요일" << endl;
	}

	/*
	int Day = 0;
	cout << "요일번호를 입력해주세요.";
	cin >> Day;

	if (Day == 1) {
		cout << "월요일";
	}
	else if(Day == 2) {
		cout << "화요일"  ;
	}
	else if (Day == 3) {
		cout << "수요일"  ;
	}
	else if (Day == 4) {
		cout << "목요일"  ;
	}
	else if (Day == 5) {
		cout << "금요일"  ;
	}
	else if (Day == 6) {
		cout << "토요일" ;
	}
	else{
		cout << "일요일" ;
	}
	//스위치문 if문으로 바꾸기 과제
	
	cout << "입니다" << endl;
	
	*/

	//반복문 for : 반복 횟수를 정해서 반복 실행

	/*
		for(구문1; 구문2; 구문3){}
		
		구문1
		- for 구문이 처음 실행될 때 최초 한번 실행되는 구문
		- 반복 횟수를 결정하는 변수 선언

		구문2
		- 반복 실행 될 때 조건 비교식 구문
		- 조건 비교식의 결과값이 참일 떄 계속 반복 실행
		
		구문3
		- 코드블럭이 반복 실행될때마다 코드블럭 실행 이후에 실행되는 구문

		for(int i=0; i<10; i++){}
	*/


	/*for (int i = 0; i < 10; i++) {
		cout << "Hello World!" << endl;
	}

	int Total = 0;
	for (int i = 1; i <= 10; i++) {
		Total += i;
		cout << Total << endl;
	}
	*/

	int Mul = 0;
	int Dan = 0;

	/*cout << "몇단?";
	cin >> Dan;


	for (int i = 1; i <= 9; i++) {
		Mul = Dan * i;
		cout << Dan  << " x " << i << " = ";
		cout << Mul << endl;
	}
	*/

	int Goo = 0;
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			Goo = i * j;
			cout << i << " x " << j << " = " << Goo << endl;

		}
		cout << endl;
	}
	
	//중첩 for
	//구구단 전체



	/*
		while : 조건비교식이 참인경우에 실행하는 구문
		while(조건 비교식){}
		while(true){}
		while(1){}
	
	*/

	int iter = 0;
	while (iter < 10) {
		cout << "Hello World "<<iter+1<<"번째" << endl;
		iter++;
	}

	/*
	while (true) {
		로그인 시도
		아이디/비번 체크
		로그인 성공
			break;
		로그인 실패
	}

	*/


	/*
	do {
		cout << "Hello World " << iter + 1 << "번째" << endl;
		iter++;
	} while (iter < 10);



	int IterNumber = 0;
	int IterA = 0;
	int IterB = 0;

	cin >> IterNumber;
	for (int i = 0; i < IterNumber; i++) {
		cin >> IterA >> IterB;
		cout << IterA + IterB << endl;
	}
	*/
	
	int Amount = 0;  //계산 된 가격
	int Count = 0; //각각 물건을 몇개 샀는지
	int Price = 0;
	int Receipt = 0; //영수증에 적힌 가격
	int SortNumber = 0; //몇가지 물건

	bool Zero;
	
	cout << "영수증에 적힌 금액은? ";
	cin >> Receipt;

	//cout << "몇가지 물건을 샀는가? ";
	//cin >> SortNumber;

	/*
	cout << "각각의 가격과 개수는?" << endl;

	for (int i = 0; i < SortNumber; i++) {
		cin >> Price >> Count;
		Amount = Amount + (Price * Count);
	}

	cout << "실제 값은 " << Amount << endl;

	if (Amount == Receipt) {
		cout << "맞게 계산됐습니다." << endl;
	}
	else {cout << "틀리게 계산됐습니다." << endl;
	}
	*/
	
	while (Receipt!=0) {	

		if (Receipt < 0) {
			Zero = false;
			break;
		}
		cout << "각각의 가격과 개수는?" << endl;
		cin >> Price >> Count;
		Receipt = Receipt - (Price * Count);
	}

	if (Zero == false) {
		cout << "틀리게 계산됐습니다." << endl;
	}
	

	/*
	if (Receipt == 0) {
		cout << "맞게 계산됐습니다." << endl;
	}
	else {
		cout << "틀리게 계산됐습니다." << endl;
	}
	*/




}

void DefineFunction()    //함수 정의는 메인함수 뒤로 혹은 파일 분리   -> 함수 정의
{
	cout << "Hello Function" << endl;

}




/*
	bit : 컴퓨터 데이터 저장 최소단위
	byte : 컴퓨터 정보 저장의 최소단위(8bit)
	1byte : 8bit

	2진수 숫자 데이터 : 0,1
	진법 계산
	1010 => 2^3 *1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10

	색 표현, 문자 표현, 아이피주소 표현 : 1byte 기준으로 확장
*/