#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	cout << "������� ���-�� ���������� �����������: "; 
    int km; 
    cin >> km;
    cout << "������� ���-�� ������������ ������� � ������: ";
    int litr;
    cin >> litr;
    
	double fuelc = (litr / ( km / 100));
    
    cout << "������ ������� �� 100 ��: " << fuelc << endl;
    
    system("pause");
	
	return 0;
}

 
