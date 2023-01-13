#include <iostream>
using namespace std;

float wholeStay(string month, int stay);

main()
{
    string month;
    int stay;
    float result;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> stay;
    result = wholeStay(month, stay);
    cout << result;
}

float wholeStay(string month, int stay)
{
    float total1;
    float total2;

    if (month == "May" || month == "October")
    {
        total1 = stay * 50;
        total2 = stay * 65;
        if (stay > 7 && stay <= 14)
            total1 = total1 - (total1 * 0.05);
        if (stay > 14)
        {
            total1 = total1 - (total1 * 0.3);
            total2 = total2 - (total2 * 0.10);
        }
        cout << "Studio: " << total1 << endl;
        cout << "Apartment: " << total2 << endl;
    }

    if (month == "June" || month == "September")
    {
        total1 = stay * 75.20;
        total2 = stay * 68.70;
        if (stay > 14)
        {
            total1 = total1 - (total1 * 0.2);
            total2 = total2 - (total2 * 0.10);
        }
        cout << "Studio: " << total1 << endl;
        cout << "Apartment: " << total2 << endl;
    }

    if (month == "July" || month == "August")
    {
        total1 = stay * 76;
        total2 = stay * 77;
        total2 = total2 - (total2 * 0.10);
    }
    cout << "Studio: " << total1 << endl;
    cout << "Apartment: " << total2 << endl;
}
