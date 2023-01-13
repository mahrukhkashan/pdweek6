#include <iostream>
using namespace std;

string grade(float percentage);

main()
{
    string name;
    float english;
    float maths;
    float chemistry;
    float socialScience;
    float biology;
    float total;
    float percentage;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter English's marks: ";
    cin >> english;
    cout << "Enter Math's marks: ";
    cin >> maths;
    cout << "Enter Chemistry's marks: ";
    cin >> chemistry;
    cout << "Enter Social Science's marks: ";
    cin >> socialScience;
    cout << "Enter biology's marks: ";
    cin >> biology;

   total = english + maths + chemistry + socialScience + biology;
   cout << "Total marks are: " << total << endl;
   percentage = (total * 100)/500;
   cout << "Percentage is " << percentage << endl;

   grade(percentage);
}

string grade(float percentage)
{
    if(percentage > 90.0 && percentage <= 100.0)
    cout << "A+";
    if(percentage <= 90.0 && percentage > 80)
    cout << "A";
    if(percentage <= 80 && percentage > 70)
    cout << "B+";
    if(percentage <= 70 && percentage > 60)
    cout << "B";
    if(percentage <= 60 && percentage > 50)
    cout << "C";
    if(percentage <= 50 && percentage >= 40)
    cout << "D";
    if(percentage < 40)
    cout << "F";
    cin >> percentage;
}