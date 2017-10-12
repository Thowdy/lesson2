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
    cout << "Введите название:" << endl;
    cin.getline (Peper.Name,20);
    cout << "Введите диаметр:" << endl;
    cin >> Peper.diam;
    cout << "Введите вес:" << endl;
    cin >> Peper.Ccal;
    cout << "Пицца: " << Peper.Name << endl << "Диаметр: " << Peper.diam << endl << "Вес: " << Peper.Ccal << endl;
    cin.get();
    cin.get();
    return 0;
  }
