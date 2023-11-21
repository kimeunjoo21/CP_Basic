
#include <iostream> //Input/Output Stream

#define NUMBER 100

using namespace std;
// std::cout => cout


void DefineFunction(); //���� �ڿ� �Լ� ���� �ִٴ°��� �˷���  -> �Լ� ����


int main()
{
	//�Լ� ȣ��
	DefineFunction();    //������� �̸��ε� ()�� ������ ������ �Լ� / ()�� ������ ���� ����   -> �Լ� ȣ��

	std::cout << "Hello World!\n";

	//std : standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	//cout << '300' + "\n";
	cout << 500 << endl; //endl : endline
	cout << NUMBER + 50 << endl;


	int Number1; // ���� ����
	Number1 = 10; // �ʱⰪ ����

	int Number2 = 10; // ���� ���� �� �ʱ�ȭ

	int Number3 = 1, Number4 = 2;

	Number3 = 5;

	// �ɺ��� ���(Constant)
	const int Number5 = 10;

	// Number5 = 30; //���� ������ �� ����

	// ������ Ÿ��(int : integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;

	// �Ǽ��� Ÿ��(float)

	float Num10 = 1.234f;
	double Num11 = 1.234;

	//���� ������ : ����(1��), ���ڿ�(2���̻�)
	//char : character
	//char Ÿ�� ���� ǥ�� : '' ���

	bool Condition = true;

	//auto ���� Ű����
	auto AutoNum = 10;

	cout << Number1 << std::endl;

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// ���� ���꿡�� �ݺ� ������ ������ ����
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
		�� ����
		ũ����� ����� ��/���� => ���� ��� 1/0
		true : �� : 1
		false : ���� : 0

	*/

	int Compare1 = 10;
	int Compare2 = 20;

	// > ũ��, < �۴� => ������ ����

	cout << (Compare1 > Compare2) << endl;
	cout << (Compare1 < Compare2) << endl;
	cout << (Compare1 >= 10) << endl;
	cout << (Compare1 == Compare2) << endl;
	cout << (Compare1 != Compare2) << endl;

	cout << ((Compare1 < Compare2) && (Compare1 < 50)) << endl;
	cout << !(Compare1 < Compare2) << endl;
	
	int Condition1 = 100;


	/*
		if�� �����ϴ� ���ǽ��� ����
		:������� bool ������
	 
		���ǽ��� ����
		-�񱳿����
		-bool ������
		-true -> 1 false-> 0
		-��������
	*/


	if (Condition1 >= 50) {
		//���� �� ���౸��
		cout << Condition1 << endl;
	}

	if (true) {}
	if (false) {}
	if(1){}
	if(0){}
	if(20){}
	int Condition2 = 10;        //0:false �̿��� ����:true ���ڵ����͵� true
	if(Condition2 + 5) {}
	if(Condition1 >=50 && Condition2<10){}

	/*
		if(���ǽ�1){
			//���ǽ�1�� ���� �� ���� ����
		}

		if(���ǽ�2){
			//���ǽ�2�� ���� �� ���� ����
		} else {
			//���ǽ�2�� ������ �� ���� ����
		}

		if(���ǽ�3){
			//���ǽ�3�� ���� �� ���౸��
		}else if(���ǽ�4){
			//���ǽ�4�� ���� �� ���౸��
		}else if(���ǽ�5){
			//���ǽ�5�� ���� �� ���౸��
		}else{
			//���ǽ��� ��� ������ �� ���౸��
		}

	*/

	/*
		A,B �� ���� �Է� �޾� ���ؼ� ��� ���
		��� : A>B
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
	

	/*�� ���� : bool ������ ����
		AND : && (ampersand)

		true && true : true
		true && false : false
		=> bool �����Ͱ� ��� true �� �� ����� true

		OR : || (pipe)
		false || true : true
		false || false : false
		=> bool ������ �� �ϳ��� true �̸� ����� true

		NOT : ! 
		!(false) => true
		bool �������� ������� �ݴ�� ����

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


	//������ ������ ����µ�, ����ڰ� �λ����Ǹ� ���ߴ�.
	//Ű�� �� 180�̻�, ���� ������ ���� �԰� �־��ٰ� ���ߴ�.
	//������ ã�� ���ǹ��� �ۼ��Ͻÿ�.
	//�ʻ� �Է°� : Black = B, White = W, Red = R ...


	int TallNumber = 0;
	char ClothColor = NULL;  //�ʱ�ȭ ���� �ʾƵ� �Ǳ� �� / ' ' : ���� �ִ°� / NULL �� ���� ���� ���°�

	//cin >> TallNumber;
	//cin >> ClothColor;

	//TallNumber >= 180
	//ClothColor == 'B' 

	
	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "����" << endl;
	}
	else if (TallNumber >= 180 || ClothColor == 'B') {
		cout << "������" << endl;
	}
	else {
		cout << "�ù�" << endl;
	}
	

	/*
		180�̻��̰� ������ �� : ����
		180�����̰� ������ �� : ������
		180�̻��̰� �ٸ��� �� : ������
		�� ���� ��� �ƴϸ� : �ñ�
	*/

	//��ø
	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "����" << endl;
		}
		else {
			cout << "������" << endl;
		}
	}

	else {
		if (ClothColor == 'B') {
			cout << "������" << endl;
		}
		else {
			cout << "�ù�" << endl;
		}
	}

	

	/*
		switch ~ case

		switch�� �����ϴ� ������ �����
		:����, ����
		
		
		switch(����){
			case �����1:
				���౸��1
			case �����2:
				���౸��2
			...
		}
	*/

	
	//���� ��ȣ�� �Է¹޾� �ش� ��ȣ�� ���� �̸� ���
	// 0 : �Ͽ��� ~ 6 : �����

	int DayNum = 0;
	//cout << "���Ϲ�ȣ�� �Է����ּ��� : ";
	//cin >> DayNum;
	switch (DayNum) {
		case 0:
			cout << "������" << endl;
			break;
		case 1:
			cout << "������" << endl;
			break;
		case 2:
			cout << "ȭ����" << endl;
			break;
		case 3:
			cout << "������" << endl;
			break;
		case 4:
			cout << "�����" << endl;
			break;
		case 5:
			cout << "�ݿ���" << endl;
			break;
		case 6:
			cout << "�����" << endl;
	}

	/*
	int Day = 0;
	cout << "���Ϲ�ȣ�� �Է����ּ���.";
	cin >> Day;

	if (Day == 1) {
		cout << "������";
	}
	else if(Day == 2) {
		cout << "ȭ����"  ;
	}
	else if (Day == 3) {
		cout << "������"  ;
	}
	else if (Day == 4) {
		cout << "�����"  ;
	}
	else if (Day == 5) {
		cout << "�ݿ���"  ;
	}
	else if (Day == 6) {
		cout << "�����" ;
	}
	else{
		cout << "�Ͽ���" ;
	}
	//����ġ�� if������ �ٲٱ� ����
	
	cout << "�Դϴ�" << endl;
	
	*/

	//�ݺ��� for : �ݺ� Ƚ���� ���ؼ� �ݺ� ����

	/*
		for(����1; ����2; ����3){}
		
		����1
		- for ������ ó�� ����� �� ���� �ѹ� ����Ǵ� ����
		- �ݺ� Ƚ���� �����ϴ� ���� ����

		����2
		- �ݺ� ���� �� �� ���� �񱳽� ����
		- ���� �񱳽��� ������� ���� �� ��� �ݺ� ����
		
		����3
		- �ڵ���� �ݺ� ����ɶ����� �ڵ�� ���� ���Ŀ� ����Ǵ� ����

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

	/*cout << "���?";
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
	
	//��ø for
	//������ ��ü



	/*
		while : ���Ǻ񱳽��� ���ΰ�쿡 �����ϴ� ����
		while(���� �񱳽�){}
		while(true){}
		while(1){}
	
	*/

	int iter = 0;
	while (iter < 10) {
		cout << "Hello World "<<iter+1<<"��°" << endl;
		iter++;
	}

	/*
	while (true) {
		�α��� �õ�
		���̵�/��� üũ
		�α��� ����
			break;
		�α��� ����
	}

	*/


	/*
	do {
		cout << "Hello World " << iter + 1 << "��°" << endl;
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
	
	int Amount = 0;  //��� �� ����
	int Count = 0; //���� ������ � �����
	int Price = 0;
	int Receipt = 0; //�������� ���� ����
	int SortNumber = 0; //��� ����

	bool Zero;
	
	cout << "�������� ���� �ݾ���? ";
	cin >> Receipt;

	//cout << "��� ������ ��°�? ";
	//cin >> SortNumber;

	/*
	cout << "������ ���ݰ� ������?" << endl;

	for (int i = 0; i < SortNumber; i++) {
		cin >> Price >> Count;
		Amount = Amount + (Price * Count);
	}

	cout << "���� ���� " << Amount << endl;

	if (Amount == Receipt) {
		cout << "�°� ���ƽ��ϴ�." << endl;
	}
	else {cout << "Ʋ���� ���ƽ��ϴ�." << endl;
	}
	*/
	
	while (Receipt!=0) {	

		if (Receipt < 0) {
			Zero = false;
			break;
		}
		cout << "������ ���ݰ� ������?" << endl;
		cin >> Price >> Count;
		Receipt = Receipt - (Price * Count);
	}

	if (Zero == false) {
		cout << "Ʋ���� ���ƽ��ϴ�." << endl;
	}
	

	/*
	if (Receipt == 0) {
		cout << "�°� ���ƽ��ϴ�." << endl;
	}
	else {
		cout << "Ʋ���� ���ƽ��ϴ�." << endl;
	}
	*/




}

void DefineFunction()    //�Լ� ���Ǵ� �����Լ� �ڷ� Ȥ�� ���� �и�   -> �Լ� ����
{
	cout << "Hello Function" << endl;

}




/*
	bit : ��ǻ�� ������ ���� �ּҴ���
	byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
	1byte : 8bit

	2���� ���� ������ : 0,1
	���� ���
	1010 => 2^3 *1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10

	�� ǥ��, ���� ǥ��, �������ּ� ǥ�� : 1byte �������� Ȯ��
*/