#include <iostream>
using namespace std;

int main()
{
    int age;
    char driveLicenseInput;
    char recommendationInput;
    bool hasDriverLicense;
    bool hasRecommendation;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Do you have a driver's license? (y/n): ";
    cin >> driveLicenseInput;

    cout << "Do you have a recommendation? (y/n): ";
    cin >> recommendationInput;

    driveLicenseInput = tolower(driveLicenseInput);
    recommendationInput = tolower(recommendationInput);

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

    if (recommendationInput == 'y')
    {
        hasRecommendation = true;
    }
    else if (recommendationInput == 'n')
    {
        hasRecommendation = false;
    }
    else
    {
        cout << "Invalid input for recommendation. Please enter 'y' or 'n'." << endl;
        return 1;
    }

    if ((age >= 21 && hasDriverLicense) || hasRecommendation)
    {
        cout << "You are hired!" << endl;
    }
    else
    {
        cout << "You are rejected!" << endl;
    }

    return 0;
}