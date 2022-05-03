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
    cout << " Суммарная стоимость" << Box::BoxArray(M, N) << endl;
    cout << " Не превосходит значения 50 " << Box::BoxSizeCheck(M, N, 50) << endl;
    cout << " Максимальный вес, обьем которых не > vMax " << Box::BoxMaxWeight(M, N, 90) << endl;
  
    cout << " Можно вложить друг в друга " << Box::CheckMatryoshka(M, N) << endl;
    
    cout << " Коробки 1,2,3,5,4 и 2,3,4,9,6 равны ";  if (M[0] == M[1]) cout << "равны" << endl;

    cout << " Коробка 3 " << endl << M[2]; cout << endl;
   // cout << "Ввод коробки"; cin >> M[1]; cout << endl << M[1];

  

    
   
    Container container = Container(100,100,100,100);
    container.push(M[1]);
    container.push(M[0]);
    container.push(M[2]);
    container.push(M[3]);
    
    cout << endl <<  " Количество коробок в контейнере " << container.Length() << endl;
    cout << endl <<  " Суммарный вес содержимого " << container.FindWeight() << endl;
    cout << endl << " Суммарный вес содержимого " << container.FindWeight() << endl;
    cout << endl << " Суммарная стоимость содержимого " << container.AllValue() << endl;
    cout << endl << " Суммарный вес содержимого " << container.FindWeight() << endl;
    cout << endl << "Коробка 1" << endl << container.getBox(2);
    cout << endl << "Коробка 1 удалена" << endl; container.erase(2);
    cout << endl << "Вывод контейнера" << container;
    cout << endl << "Ввод контейнера";cin >> container;
    cout << container;

    int n = 5;
    int* p = &n;
    
    cout << "pra" << p;
   // cout << container << endl;
   // container[0].length = 3;
   //  cout << container;
   // delete[]M;

}