#ifndef CROP_H
#define CROP_H

#include <string>
using namespace std;

class Date
{
public :
    int day, month, year;

public:
    Date() : day(0), month(0), year(0) {}
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void display() const;
};

class Crop
{
public:
    static int nextID;
    int CropID;
    string name;
    string mandi;
    double price;
    Date date;

public:
    Crop();

    void setData(string n, string m, double p, Date d);

    inline int getID() const { return CropID; }
    inline string getName() const { return name; }
    inline string getMandi() const { return mandi; }
    inline double getPrice() const { return price; }

    void display() const;

    friend void summaryReport(Crop arr[], int n);
};

void viewAll(Crop arr[], int n);
Crop* searchByID(Crop arr[], int n, int id);
void summaryReport(Crop arr[], int n);

#endif