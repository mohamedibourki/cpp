#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Please enter a number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Your number " << number << " is even." << endl;
    }
    else
    {
        cout << "Your number " << number << " is odd." << endl;
    }

    return 0;
}