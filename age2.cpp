#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter a age you want to check:" << endl;
    cin >> age;
    if (age > 0 && age < 12)
    {
        cout << "you are a KID:" << endl;
    }
    else if (age >= 12 && age <= 50)
    {
        cout << "you are  YOUNG:" << endl;
    }
    else if (age <= 0)
    {
        cout << "you not yet BORNE:" << endl;
    }
    else
    {
        cout << "you are OLD:" << endl;
    }
    return 0;
}