#include <iostream>
using namespace std;

int main()
{
    int age;
    char driveLicenseInput;
    bool hasDriverLicense;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Do you have a driver's license? (y/n): ";
    cin >> driveLicenseInput;

    driveLicenseInput = tolower(driveLicenseInput);

    if (driveLicenseInput == 'y')
    {
        hasDriverLicense = true;
    }
    else if (driveLicenseInput == 'n')
    {
        hasDriverLicense = false;
    }
    else
    {
        cout << "Invalid input for driver's license. Please enter 'y' or 'n'." << endl;
        return 1;
    }

    if (age >= 21 && hasDriverLicense)
    {
        cout << "You are hired!" << endl;
    }
    else
    {
        cout << "You are rejected!" << endl;
    }

    return 0;
}