#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <map>
using namespace std;

string get_target(string binary) //Function For Signed Binary to Decimal.
{
 	int power = pow(2,26-1);
    int sum = 0;
    int i;

    for (i=0; i<26; ++i)
    {
        if ( i==0 && binary[i]!='0')
        {
            sum = power * -1;
        }
        else 
        {
            sum += (binary[i]-'0')*power;//The -0 is needed
        }
        power /= 2;
    }


	string str;          //The string
	ostringstream temp;  //temp as in temporary
	temp<<sum;
	str=temp.str();  
    return str;
}



string get_offset(string binary) 
{
    
	int power = pow(2,16-1);
    int sum = 0;
    int i;

    for (i=0; i<16; ++i)
    {
        if ( i==0 && binary[i]!='0')
        {
            sum = power * -1;
        }
        else 
        {
            sum += (binary[i]-'0')*power;//The -0 is needed
        }
        power /= 2;
    }


	string str;          //The string
	ostringstream temp;  //temp as in temporary
	temp<<sum;
	str=temp.str();  
    return str;
}


string bin_to_hex(string str)
{
 cout << atoi(str.c_str()) << endl;
    switch(atoi(str.c_str()))
    {
        case 0 : return "0";
        case 1: return "1";
        case 10: return "2";
        case 11: return "3";
        case 100: return "4";
        case 101: return "5";
        case 110: return "6";
        case 111: return "7";
        case 1000: return "8";
        case 1001: return "9";
        case 1010: return "A";
        case 1011: return "B";
        case 1100: return "C";
        case 1101: return "D";
        case 1110: return "E";
        case 1111: return "F";
        default: return "";
    }
}



string to_label(int x){

	stringstream ss;
	ss << x;
	string str =  "label" + ss.str() + ":";
	return str;
}


int main()
{
    
    cout << get_target("00000000000000000011011100") << endl;
    
    
//    map<string, string> if_map;
//
//	// insert some items into if_map
//	if_map["hi"] = "hello";
//	if_map["bye"] = "goodbye";
//
//	map<string, string> reversed;
//
//	for (map<string, string>::iterator i = if_map.begin(); i != if_map.end(); ++i)
//    	reversed[i->second] = i->first;
//    
//    cout << reversed["hello"] << endl;
//    cout << reversed["goodbye"] << endl;
    
    return 0;
}
