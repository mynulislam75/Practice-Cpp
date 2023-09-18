#include <iostream>
#include <string>
using namespace std;

string getString = "AABBCC";
string copyString = "";
string finalOutput = "";

string compString(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        // cout << "whatttt \n";
        // cout << i << "\n";
        char getSValue = a[i];
        cout << getSValue << " \n";
        // copyString = copyString + getSValue;
        // cout << copyString<<"\n";

        for (int j = 0; j < copyString.length(); j++)
        {

            // cout <<copyString[j]<<" \n";

            if (getSValue != copyString[j])
            {
             
            }
        }
    }
}

int main()
{
    compString(getString);
}