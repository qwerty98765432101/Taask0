#include <iostream>
#include <stdlib.h>
#include "BoxClass.h"
#include "ContainerClass.h"
using namespace std;
using namespace cntainer;
int main()
{
   
    setlocale(LC_ALL, "");
    system("CLS");

    int N = 4;
   
    Box* M;
    M = new Box[N];
    double* checkSize;
    checkSize = new double[N];

    M[0] = Box(1, 2, 3, 5, 4);
    M[1] = Box(2, 3, 4, 9, 6);
    M[2] = Box(3, 4, 5, 4, 5);
    M[3] = Box(4, 5, 6, 7, 8);
    cout << " ��������� ���������" << Box::BoxArray(M, N) << endl;
    cout << " �� ����������� �������� 50 " << Box::BoxSizeCheck(M, N, 50) << endl;
    cout << " ������������ ���, ����� ������� �� > vMax " << Box::BoxMaxWeight(M, N, 90) << endl;
  
    cout << " ����� ������� ���� � ����� " << Box::CheckMatryoshka(M, N) << endl;
    
    cout << " ������� 1,2,3,5,4 � 2,3,4,9,6 ����� ";  if (M[0] == M[1]) cout << "�����" << endl;

    cout << " ������� 3 " << endl << M[2]; cout << endl;
   // cout << "���� �������"; cin >> M[1]; cout << endl << M[1];

  

    
   
    Container container = Container(100,100,100,100);
    container.push(M[1]);
    container.push(M[0]);
    container.push(M[2]);
    container.push(M[3]);
    
    cout << endl <<  " ���������� ������� � ���������� " << container.Length() << endl;
    cout << endl <<  " ��������� ��� ����������� " << container.FindWeight() << endl;
    cout << endl << " ��������� ��� ����������� " << container.FindWeight() << endl;
    cout << endl << " ��������� ��������� ����������� " << container.AllValue() << endl;
    cout << endl << " ��������� ��� ����������� " << container.FindWeight() << endl;
    cout << endl << "������� 1" << endl << container.getBox(2);
    cout << endl << "������� 1 �������" << endl; container.erase(2);
    cout << endl << "����� ����������" << container;
    cout << endl << "���� ����������";cin >> container;
    cout << container;

    int n = 5;
    int* p = &n;
    
    cout << "pra" << p;
   // cout << container << endl;
   // container[0].length = 3;
   //  cout << container;
   // delete[]M;

}