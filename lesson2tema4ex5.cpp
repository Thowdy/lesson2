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
    cout << "������� �������:" << endl;
    cin >> (*pz).diam;
    cout << "������� ���:" << endl;
    cin >> (*pz).Name ;
    cout << "������� ���:" << endl;
    cin >> (*pz).Ccal;
    cout << "�����: "<< (*pz).Name<<endl;
    cout << "�������: " << (*pz).diam << endl << "���: " << (*pz).Ccal << endl;
    system ("pause");
    delete pz;
    return 0;
  }
