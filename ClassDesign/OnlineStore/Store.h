// I ran out of time for section C but I want to submit what I have and explain what I understand

#include <iostream>
#include <string>
#include <array>
using namespace std;

class Item
{
    // Here I'll store all the variables
    private:
        string name;
        double price;
        int quantity;
    public:
        // What I tried to do here was create a method that stored it's own values
        Item(string x = "item", double y = 14.99, int z = 10){
            this -> name = x;
            this -> price = y;
            this -> quantity = z;
        }

        // This would be called in the cpp file to print the item under a format
        string PrintItem(){
            return this->name + "$" + this->price + "x" + this->quantity;
        }
};