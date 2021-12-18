#include <iostream>
#include <string>
using namespace std;

/*
Fabian Hernandez-Angel
Class Design

Micheal Landes CSCI 151 Fall
*/

class Url
{
    public:
        // Functions returning the full url or segments
        string Link(string val){
            return val;
        }
        string Scheme(string val){
            int endPointOne = val.find(':') + 1;
            return val.substr(0, endPointOne);
        }
        string Authority(string val){
            int endPointTwo = val.find('/', 8);
            return val.substr(Scheme(val).length(), endPointTwo - Scheme(val).length());            
        }
        string Path(string val){
            return val.substr(Scheme(val).length() + Authority(val).length(), val.length() - Authority(val).length());
        }
};