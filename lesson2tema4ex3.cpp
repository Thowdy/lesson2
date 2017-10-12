#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
 
    struct candyBar
    {
        string name;
        double weight;
        int price;
    };
 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    candyBar candyArray[3];
 
    cout << "Введите название первой коробки конфет: ";
    cin >> candyArray[0].name;
    cout << "Введите вес первой коробки конфет: ";
    cin >> candyArray[0].weight;
    cout << "Введите цену первой коробки: ";
    cin >> candyArray[0].price;
    cout << endl;
 
    cout << "Введите название второй коробки конфет: ";
    cin >> candyArray[1].name;
    cout << "Введите вес второй коробки: ";
    cin >> candyArray[1].weight;
    cout << "Введите цену второй коробки: ";
    cin >> candyArray[1].price;
    cout << endl;
 
    cout << "Введите нащвание третьей коробки конфет: ";
    cin >> candyArray[2].name;
    cout << "Введите вес третьей коробки конфет: ";
    cin >> candyArray[2].weight;
    cout << "Введите цену третьей коробки: ";
    cin >> candyArray[2].price;
    cout << endl;
 
    cout << "---------------------------------------------------" << endl;
 
    cout << "Название первой коробки: " << candyArray[0].name;
    cout << endl;
    cout << "Вес первой коробки: " << candyArray[0].weight;
    cout << endl;
    cout << "Цена первой коробки: " << candyArray[0].price;
    cout << endl;
    cout << endl;
 
    cout << "Название второй коробки: " << candyArray[1].name;
    cout << endl;
    cout << "Вес второй коробки: " << candyArray[1].weight;
    cout << endl;
    cout << "Цена второй коробки: " << candyArray[1].price;
    cout << endl;
    cout << endl;
 
    cout << "Название третьей коробки: " << candyArray[2].name;
    cout << endl;
    cout << "Вес третьей коробки: " << candyArray[2].weight;
    cout << endl;
    cout << "Цена третьей коробки: " << candyArray[2].price;
    cout << endl;
    cout << endl;
 
    cout << "---------------------------------------------------" << endl;
 
    return 0;
}
