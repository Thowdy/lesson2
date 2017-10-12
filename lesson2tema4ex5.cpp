#include <iostream>
#include <string>

struct Pizza
{
    std :: string Name ;
    double diam;
    int Ccal;
    };
int main ()
{   using namespace std;
    Pizza *pz =new Pizza;
    cout << "Введите диаметр:" << endl;
    cin >> (*pz).diam;
    cout << "Введите имя:" << endl;
    cin >> (*pz).Name ;
    cout << "Введите вес:" << endl;
    cin >> (*pz).Ccal;
    cout << "Пицца: "<< (*pz).Name<<endl;
    cout << "Диаметр: " << (*pz).diam << endl << "Вес: " << (*pz).Ccal << endl;
    system ("pause");
    delete pz;
    return 0;
  }
