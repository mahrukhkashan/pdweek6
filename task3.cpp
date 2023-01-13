#include <iostream>
using namespace std;

void zodiacSign(int date, string month);

main()
{
    int date;
    string month;
    cout << "Enter Date: ";
    cin >> date;
    cout << "Enter Month: ";
    cin >> month;
    zodiacSign(date, month);
}

void zodiacSign(int date, string month)
{
    if((month == "March" && date >= 21) || (month == "April" && date <= 19))
    cout << "Aries";
    if((month == "April" && date >= 20) || (month == "May" && date <= 20))
    cout << "Taurus";
    if((month == "May" && date >=21) || (month == "June" && date <= 20))
    cout << "Gemini";
    if((month == "June" && date >= 21) || (month == "July" && date <= 22))
    cout << "Cancer";
    if((month == "July" && date >= 23) || (month == "August" && date <= 22))
    cout << "Leo";
    if((month == "August" && date >= 23) || (month == "September" && date <= 22))
    cout << "Virgo";
    if((month == "September" && date >= 23) || month == "October" && date <= 22)
    cout << "Libra";
    if((month == "October" && date >= 23) || (month == "November" && date <= 21))
    cout << "Scorpio";
    if((month == "November" && date >= 22) || (month == "December" && date <= 21))
    cout << "Sagittarius";
    if((month == "December" && date >= 22) || (month == "January" && date <= 19))
    cout << "Capricorn";
    if((month == "January" && date >= 20) || (month == "February" && date <= 18))
    cout << "Aquarius";
    if((month == "February" && date >= 19) || (month == "March" && date <= 20))
    cout << "Pisces";
}