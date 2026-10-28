#include "Crop.h"
#include <iostream>
using namespace std;

int Crop::nextID = 1000;

void Date::display() const
{
    cout << day << "/" << month << "/" << year;
}

Crop::Crop()
{
    CropID = 0;
    price = 0;
}

void Crop::setData(string n, string m, double p, Date d)
{
    CropID = ++nextID;
    name = n;
    mandi = m;
    price = p;
    date = d;
}

void Crop::display() const
{
    cout << CropID << " " << name << " " << mandi << " " << price << " ";
    date.display();
    cout << endl;
}

void viewAll(Crop arr[], int n)
{
    if (n == 0)
    {
        cout << "No records found." << endl;
        return;
    }

    cout << "ID | Name | Mandi | Price | Date" << endl;
    for (int i = 0; i < n; i++)
        arr[i].display();
}

Crop* searchByID(Crop arr[], int n, int id)
{
    Crop* ptr = arr;
    for (int i = 0; i < n; i++, ptr++)
    {
        if (ptr->CropID == id)
            return ptr;
    }
    return nullptr;
}

void summaryReport(Crop arr[], int n)
{
    double total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i].price;   // friend: direct access to private data

    cout << "Total records: " << n << endl;
    if (n > 0)
        cout << "Average price: " << total / n << endl;
}