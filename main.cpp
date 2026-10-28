#include "Crop.h"
#include <iostream>
using namespace std;
void createCrop(Crop arr[], int &n)
{
    if (n == 100)
    {
        cout << "Array is full." << endl;
        return;
    }

    string name, mandi;
    double price;
    int d, m, y;
    char slash;

    cout << "Enter crop name: ";
    cin >> name;
    cout << "Enter mandi: ";
    cin >> mandi;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter date (dd/mm/yyyy): ";
    cin >> d >> slash >> m >> slash >> y;

    arr[n].setData(name, mandi, price, Date(d, m, y));
    cout << "Crop created. ID: " << arr[n].getID() << endl;
    n++;
} 

void searchCrop(Crop arr[], int n)
{
    int id;
    cout << "Enter Crop ID: ";
    cin >> id;

    Crop* ptr = searchByID(arr, n, id);
    if (ptr != nullptr)
        ptr->display();
    else
        cout << "Crop not found." << endl;
}

int main()
{
    Crop arr[100];
    int n = 0, choice;

    do
    {
        cout << "\n1. Create Crop\n2. View All Crops\n3. Search Crop by ID"
             << "\n4. Summary Report\n0. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: createCrop(arr, n); break;
            case 2: viewAll(arr, n); break;
            case 3: searchCrop(arr, n); break;
            case 4: summaryReport(arr, n); break;
            case 0: cout << "Exiting program." << endl; break;
            default: cout << "Invalid choice." << endl;
        }
    } while (choice != 0);

    return 0;
}