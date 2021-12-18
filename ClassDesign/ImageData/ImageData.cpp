#include "ImageData.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    Image newImage;

    cout << "Enter file name: ";
    string fl;
    cin >> fl;

    cout << "Enter Image type: ";
    string it;
    cin >> it;

    cout << "Enter a day: ";
    int d;
    cin >> d;
    cout << "Enter a month: ";
    int m;
    cin >> m;
    cout << "Enter a year: ";
    int y;
    cin >> y;
    
    cout << "Enter a size: ";
    double s;
    cin >> s;

    cout << "Enter an Author name: ";
    string an;
    cin >> an;

    cout << "Enter a dimension for x: ";
    int dx;
    cin >> dx;
    cout << "Enter a dimension for y: ";
    int dy;
    cin >> dy;

    cout << "Enter a apeture size: ";
    int as;
    cin >> as;

    cout << "Enter a exposure time: ";
    int et;
    cin >> et;

    cout << "Enter an ISO value: ";
    int iv;
    cin >> iv;

    cout << "Enable flash: ";
    bool f;
    cin >> f;

    cout << newImage.FileName(fl) << "\n";
    cout << newImage.ImageType(it) << "\n";
    cout << newImage.Date(d, m, y) << "\n";
    cout << newImage.Size(s) << "mb \n";
    cout << newImage.AuthorName(an) << "\n";
    cout << newImage.Dimensions(dx, dy) << "\n";
    cout << newImage.ApetureSize(as) << "\n";
    cout << newImage.ExposureTIme(et) << "\n";
    cout << newImage.ISOValue(iv) << "\n";
    cout << newImage.FlashEnabled(f) << "\n";
}