#include <iostream>
using namespace std;

string time(string arrival, string late, string early, string onTime, int timeDifference);
string result(int timeDifference);

main()
{
    int examHours, examMinutes, arrivalHours, arrivalMinutes, examTime, arrivalTime, timeDifference;
    string late = "Late";
    string early = "Early";
    string onTime = "On Time";
    string arrival;

    cout << "Exam Starting Time (hours): ";
    cin >> examHours;
    cout << "Exam Starting Time (minutes): ";
    cin >> examMinutes;
    cout << "Student hour of arrival: ";
    cin >> arrivalHours;
    cout << "Student minutes of arrival: ";
    cin >> arrivalMinutes;

    examTime = (examHours * 60) + examMinutes;
    arrivalTime = (arrivalHours * 60) + arrivalMinutes;
    timeDifference = arrivalTime - examTime;

    arrival = time(arrival, late, early, onTime, timeDifference);
    cout << arrival;
    result(timeDifference);
    cout << result;
}

string time(string arrival, string late, string early, string onTime, int timeDifference)
{

    if (timeDifference > 30)
    {
        arrival = early;
    }
    else if (timeDifference >= 30)
    {
        arrival = onTime;
    }
    else
    {
        arrival = late;
    }
    return arrival;
}

string result(int timeDifference)
{
    int hoursDifference, minutesDifference;
    string result;
    hoursDifference = timeDifference / 60;
    minutesDifference = timeDifference % 60;
    
    if(timeDifference != 0)
    {
        if(hoursDifference > 0)
        {
            result =  (hoursDifference) + ":" + (minutesDifference);
        }
        else
        {
            result = (minutesDifference) + "minutes";
        }
        if(timeDifference < 0)
        {
            result = (result) + "before the starting time";
        }
        else
        {
            result = (result) + "after the starting time";
        }
    }
    return result;
}
