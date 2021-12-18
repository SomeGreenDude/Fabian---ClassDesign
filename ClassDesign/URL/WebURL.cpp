// Reference to the header
#include "WebURL.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    // Making a new instance
    Url newURL;

    cout << "Enter a full URL: ";
    string url;
    cin >> url;
    cout << "Output:\n";
    cout << "Link:" + newURL.Link(url) + "\n";
    cout << "Scheme:" + newURL.Scheme(url) + "\n";
    cout << "Authority:" + newURL.Authority(url) + "\n";
    cout << "Path:" + newURL.Path(url) + "\n";

    // Used for testing:
    // Example URL: https://example.com/
}