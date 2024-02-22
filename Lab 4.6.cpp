#include <iostream>

using namespace std;
int main()
{
    float price, tax, tip, total;

    cout << "What was the meal price ";
    cin >> price;

    if (price >= 0.01 && price <= 5.99) 
    {
        cout << "tip = 10 %" << "\n";
        tip = price * .10;

    }

    else if (price >= 6 && price <= 12)
    {
        cout << "tip = 13%" << "\n";
        tip = price * .13;
    }

    else if (price >= 12.01 && price <= 17.00) 
    {
        cout << "tip = 16%" << "\n";
        tip = price * .16;
    }
    
    else if (price >= 17.01 && price <= 25.00) 
    {
        cout << "tip = 19%" << "\n";
        tip = price * .19;
    }

    else
    {
        cout << "tip = 22%" << "\n";
        tip = price * .22;
    }

    tax = price * .06;
    total = price + tax + tip;

    cout << "The tax is " << tax << endl;
    cout << "The total is " << total << endl;
}

