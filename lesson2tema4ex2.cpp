#include <iostream>
#include <string>

using namespace std;
 
    struct candyBar
    {
        string name;
        double weight;
        int kcal;
    };
 
int main()
{
    candyBar snack
    {
       "Mocha Munch",
       2.3,
       350
    };
 
    cout << "Имя шоколадки: " << snack.name << endl;
    cout << endl;
 
    cout << "Вес шоколадки: " << snack.weight << endl;
    cout << endl;
 
    cout << "Калорий в шоколадке: " << snack.kcal << endl;
    cout << endl;
    
	system("pause");
	
    return 0;
}
