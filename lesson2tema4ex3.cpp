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
 
    cout << "������� �������� ������ ������� ������: ";
    cin >> candyArray[0].name;
    cout << "������� ��� ������ ������� ������: ";
    cin >> candyArray[0].weight;
    cout << "������� ���� ������ �������: ";
    cin >> candyArray[0].price;
    cout << endl;
 
    cout << "������� �������� ������ ������� ������: ";
    cin >> candyArray[1].name;
    cout << "������� ��� ������ �������: ";
    cin >> candyArray[1].weight;
    cout << "������� ���� ������ �������: ";
    cin >> candyArray[1].price;
    cout << endl;
 
    cout << "������� �������� ������� ������� ������: ";
    cin >> candyArray[2].name;
    cout << "������� ��� ������� ������� ������: ";
    cin >> candyArray[2].weight;
    cout << "������� ���� ������� �������: ";
    cin >> candyArray[2].price;
    cout << endl;
 
    cout << "---------------------------------------------------" << endl;
 
    cout << "�������� ������ �������: " << candyArray[0].name;
    cout << endl;
    cout << "��� ������ �������: " << candyArray[0].weight;
    cout << endl;
    cout << "���� ������ �������: " << candyArray[0].price;
    cout << endl;
    cout << endl;
 
    cout << "�������� ������ �������: " << candyArray[1].name;
    cout << endl;
    cout << "��� ������ �������: " << candyArray[1].weight;
    cout << endl;
    cout << "���� ������ �������: " << candyArray[1].price;
    cout << endl;
    cout << endl;
 
    cout << "�������� ������� �������: " << candyArray[2].name;
    cout << endl;
    cout << "��� ������� �������: " << candyArray[2].weight;
    cout << endl;
    cout << "���� ������� �������: " << candyArray[2].price;
    cout << endl;
    cout << endl;
 
    cout << "---------------------------------------------------" << endl;
 
    return 0;
}
