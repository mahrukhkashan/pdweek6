#include <iostream>
using namespace std;

int findBorder(int height, int xCordinate, int yCordinate);

int main()
{
    int height, xCordinate, yCordinate;

    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter x cordinate: ";
    cin >> xCordinate;
    cout << "Enter y cordinate: ";
    cin >> yCordinate;

    findBorder(height, xCordinate, yCordinate);
}

int findBorder(int height, int xCordinate, int yCordinate)
{
    int xBoundary, yBoundary, base, roof;
    base = height * 3;
    roof = height * 4;

    if ((xCordinate == 0 || xCordinate == base) && (yCordinate >= 0 && yCordinate <= height))
    {
        cout << "border";
        return 0;
    }
    if ((yCordinate == 0) || (xCordinate >= 0 && xCordinate <= base))
    {
        cout << "Border";
        return 0;
    }
    if ((yCordinate == height) && ((xCordinate >= 0 && xCordinate <= height) || (xCordinate >= height * 2 && xCordinate <= base)))
    {
        cout << "Border";
        return 0;
    }
    if ((xCordinate == height || xCordinate == height * 2) && (yCordinate >= height || yCordinate <= height * 2))
    {
        cout << "Border";
        return 0;
    }
    if ((yCordinate == roof) && (xCordinate >= height && xCordinate <= height * 2))
    {
        cout << "Border";
        return 0;
    }
    if ((xCordinate > 0 && xCordinate < base) && (yCordinate > 0 && yCordinate < height))
    {
        cout << "inside";
        return 0;
    }
    if ((xCordinate > height && xCordinate < height * 2) && (yCordinate > 0 && yCordinate < roof))
    {
        cout << "inside";
        return 0;
    }
    cout << "outside";
    return 0;
}