#include <iostream>
struct Pizza
    {
        char Name [20];
        double diam;
        int Ccal;
    };
int main ()
{   using namespace std;
    Pizza Peper;
    cout << "������� ��������:" << endl;
    cin.getline (Peper.Name,20);
    cout << "������� �������:" << endl;
    cin >> Peper.diam;
    cout << "������� ���:" << endl;
    cin >> Peper.Ccal;
    cout << "�����: " << Peper.Name << endl << "�������: " << Peper.diam << endl << "���: " << Peper.Ccal << endl;
    cin.get();
    cin.get();
    return 0;
  }
