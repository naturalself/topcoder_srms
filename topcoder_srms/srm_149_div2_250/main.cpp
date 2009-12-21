#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class FormatAmt
{
	
public:
	string amount(int dollars, int cents);
	
};

string FormatAmt::amount(int dollars, int cents)
{
	
	stringstream ss;
	
	string str_dollar;
	
	string str_cent;
	
	string ret_str;
	
	//operating dollar///////////////////////////////////////
	ss << dollars;
	
	//cast:int to string
	str_dollar = ss.str();

	//clear ss
	ss.str("");
	ss.clear(stringstream::goodbit);

	if(dollars == 0){
		ret_str = "0";
	}else{
		for(int i = str_dollar.length();i > -1;i--){
			
			if((str_dollar.length()-i)%3 == 1){
				ret_str = str_dollar.substr(i,1) + "," + ret_str;
			}else{
				ret_str = str_dollar.substr(i,1) + ret_str;
			}
		}
		ret_str = ret_str.substr(0,ret_str.length()-1);
	}
	
	//operating cents/////////////////////////////////////////

	if(cents < 10){
		str_cent = "0";
	}

	ss << cents;
	
	//cast:int to string
	str_cent += ss.str();

	//clear ss
	ss.str("");
	ss.clear(stringstream::goodbit);

	ss << "$" << ret_str << "." << str_cent;
	
	return ss.str();
}


int main()
{
	
	FormatAmt test;
	
	//string ret = test.amount(123456,9);
	
	//string ret = test.amount(0,99);
	
	//string ret = test.amount(1000,1);
	
	string ret = test.amount(49734321,9);
	
	cout << "return = "<< ret << endl;
	
}

