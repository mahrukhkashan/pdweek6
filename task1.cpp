#include <iostream>
using namespace std;
 
string sports(string temp, string humidity);

main()
{
    string temp;
    string humidity;
    cout << "Enter temperature(warm or cold): ";
    cin >> temp;
    cout << "Enter humidity(dry or humid): ";
    cin >> humidity;
    sports(temp, humidity);
    cin >> humidity;
}


string sports(string temp, string humidity)
{
    if(temp == "warm" && humidity == "dry")
    cout << "Play tennis";
    if(temp == "warm" && humidity == "humid")
    cout << "swim";
    if(temp == "cold" && humidity == "dry")
    cout << "Play basketball";
    if(temp == "cold" && humidity == "humid")
    cout << "Watch tv";
}
