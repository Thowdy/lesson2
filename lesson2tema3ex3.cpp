#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	cout << "Введите кол-во пройденных киллометров: "; 
    int km; 
    cin >> km;
    cout << "Введите кол-во потраченного бензина в литрах: ";
    int litr;
    cin >> litr;
    
	double fuelc = (litr / ( km / 100));
    
    cout << "Расход топлива на 100 км: " << fuelc << endl;
    
    system("pause");
	
	return 0;
}

 
