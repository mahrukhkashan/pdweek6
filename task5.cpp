#include <iostream>
using namespace std;

float price(string fruit, string day, float quantity);

main()
{
    string fruit;
    string day;
    float quantity;
    float result;

    cout << "Enter fruit name: ";
    cin >> fruit;
    cout << "Enter day of the week: ";
    cin >> day;
    cout << "Enter quantity: ";
    cin >> quantity;
    result = price(fruit, day, quantity);
    cout << result;
}

float price(string fruit, string day, float quantity)
{
    float price;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana")
            price = quantity * 2.50;
        if (fruit == "apple")
            price = quantity * 1.20;
        if (fruit == "orange")
            price = quantity * 0.85;
        if (fruit == "grapefruit")
            price = quantity * 1.45;
        if (fruit == "kiwi")
            price = quantity * 2.70;
        if (fruit == "pineapple")
            price = quantity * 5.50;
        if (fruit == "grapes")
            price = quantity * 3.85;
    }

    else if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
            price = quantity * 2.70;
        if (fruit == "apple")
            price = quantity * 1.25;
        if (fruit == "orange")
            price = quantity * 0.90;
        if (fruit == "grapefruit")
            price = quantity * 1.60;
        if (fruit == "kiwi")
            price = quantity * 3.00;
        if (fruit == "pineapple")
            price = quantity * 5.60;
        if (fruit == "grapes")
            price = quantity * 4.20;
    }
    return price;
}