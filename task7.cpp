#include <iostream>
using namespace std;

string time(int hrs, int mins, int arrivalHrs, int arrivalMins);

main()
{
    int hrs;
    int mins;
    int arrivalHrs;
    int arrivalMins;
    string result;

    cout << "Exam Starting Time (hours): ";
    cin >> hrs;
    cout << "Exam Starting Time (minutes): ";
    cin >> mins;
    cout << "Student hour of arrival: ";
    cin >> arrivalHrs;
    cout << "Student minutes of arrival: ";
    cin >> arrivalMins;

    result = time(hrs, mins, arrivalHrs,arrivalMins);
    cout << result;

}
string time(int hrs, int mins, int arrivalHrs, int arrivalMins)
{
    if((hrs = arrivalHrs && mins = arrivalMins) || ())
}


