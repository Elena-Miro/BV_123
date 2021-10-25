//Pointer - ��� ����������, ������� 
//�������� ����� ������ ����������.
//����� - ��� ����� ������ 4 �����,
//���������� ���������� ����� ����� � ���.
#include<iostream>
using namespace std;

//#define - ����������
//��������������� ���� ���_�������� ���_��������
//#define PI 3.14
#define ULLINT unsigned long long int
#define delimiter "\n-------------------------------------\n"

//#ifdef	- #if defined
//#ifndef	- #if not defined
//#endif

//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
//#if defined - ���� ��������� POINTERS_BASICS,
//�� ������������� ���, �� ��������� #endif 
//����� ����� �����������
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//������� �������� ���������� 'a'
	cout << &a << endl;	//�������� ���� ���������� 'a' ����� ��� ������
	cout << pa << endl;	//������� ����� ���������� 'a' ���������� � ��������� 'pa'
	cout << &pa << endl;//������� ����� ��������� 'pa'
						//(�������� ����� ��������� 'pa' ����� ��� ������)
	cout << *pa << endl;
#endif // POINTERS_BASICS

#ifdef PI
	cout << delimiter << endl;
	cout << PI << endl;
#endif // PI

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
#endif
}
/*
--------------------------------------
& - Address-of operator - �������� ������ ������.
* - Dereference operator - �������� �������������.
--------------------------------------
*/

/*
--------------------------------------
+, -, ++, --
--------------------------------------
*/