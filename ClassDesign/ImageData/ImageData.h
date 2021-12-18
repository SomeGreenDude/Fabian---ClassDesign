#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Image
{
    public:
        string FileName(string val){
            return val;
        }
        string ImageType(string val){
            if(val == "PNG" || val == "png"){
                return val;
            }
            if(val == "JPG" || val == "jpg"){
                return val;
            }
            if(val == "GIF" || val == "gif"){
                return val;
            }
            
            return "UNSUPPORTED_FORMAT";
        }
        string Date(int month, int day, int year){
            stringstream sm;
            stringstream sd;
            stringstream sy;
            sm << month;
            sd << day;
            sy << year;
            string str = sm.str() + "/" + sd.str() + "/" + sy.str();
            return str;          
        }
        double Size(double val){
            return val;
        }
        string AuthorName(string val){
            return val;
        }
        string Dimensions(int x, int y){
            stringstream sx;
            stringstream sy;
            sx << x;
            sy << y;
            string str = sx.str() + "," + sy.str();
            return str;
        }
        string ApetureSize(int val){
            return "f/" + val; 
        }
        int ExposureTIme(int val){
            return val;
        }
        int ISOValue(int val){
            return val;
        }
        bool FlashEnabled(bool val){
            return val;
        }
};