#include <iostream>
using namespace std;

float charge(char customerType, char time, float minutes);

main()
{
    char customerType;
    char time;
    float minutes;
    cout << "Enter which type of customer you are(Residental or Premium) select(r/p): ";
    cin >> customerType;
    if(customerType = 'p')
    {
        cout << "Press D for day time and press N for night time: ";
        cin >> time;
    }
    cout << "Enter number of minutes you used for service: ";
    cin >> minutes;
    float result;
    result = charge(customerType, time, minutes);
    cout << "The charges are : " << result;
}

float charge(char customerType, char time, float minutes)
{
    float charge;
    if(customerType == 'r')
    {
        if(minutes <= 50)
        charge = 10.00;
        if(minutes > 50)
        charge = 10.00 + (0.20 * minutes);   
    }
    if(customerType == 'p')
    {
        if(time == 'D' && minutes <= 75)
        charge = 25.00;
        if(time == 'D' && minutes > 75)
        charge = 25.00 + (0.10 * minutes);
        if(time == 'N' && minutes <= 100)
        charge = 25.00;
        if(time == 'N' && minutes > 100)
        charge = 25.00 + (0.05 * minutes);
    }
    return charge;
}