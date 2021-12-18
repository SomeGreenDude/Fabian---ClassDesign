#include "Store.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    // Here the array is declared with a size of 6
    Item myItems[6];

    // I wanted to see if I could populate the array by the return value of the Item method
    items[0] = Item("Orb", 14.99, 14);
    items[1] = Item("Bottle", 3.99, 20);
    items[3] = Item("Broom", 11.99, 12);
    items[4] = Item("Bread", 6.99, 30);
    items[5] = Item("Candle", 10.00, 6);
    items[6] = Item("Lime", 5.99, 40);

    /* A for loop would go through the exact item amount and call the print item function so it all came out neatly\
     Or so I hoped.
    */
    for(int i = 0; i < 6; i++){
        cout << myItems[i].PrintItem << "\n";
    }
}