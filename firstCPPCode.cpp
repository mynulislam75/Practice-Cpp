// STARTING C++
#include <iostream>
using namespace std;

int getNum = 10;
int getNum2 = 20;
int createVAriable(int a, int b)
{
    cout << "Helloo,varibale \n";
    cout << getNum << "\n";
    int calcSum = a + b;
    cout << calcSum;
    return 0;300
};

int main()
{
    int getNumber;
    int getNumber2;
    cout << "Helloo C++ \n";
    cout << "hellooo,Marufa \n";
    cout << "hellooo,I am coding c++ \n";
    cout << "Enter the number one:"
         << "\n";
    cin >> getNumber;
    cout << "Enter the number two:"
         << "\n";
    cin >> getNumber2;
    createVAriable(getNumber, getNumber2);
    return 0;
};
