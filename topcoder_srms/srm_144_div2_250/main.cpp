#include<iostream>
#include<string>
#include<stdio.h>
#include<sstream>

using namespace std;

class Time{
	
//private:
//	int seconds;
	
public:
	
	string whatTime(int seconds){
		
		int H;
		int M;
		int S;
		
		stringstream ret;
		
		//cout << "seconds:" << seconds << endl;
		
		H = seconds/3600;
		
		M = (seconds - (H * 3600))/60;
		
		S = (seconds - (H * 3600) - (M*60) );
		
		cout << "H:" << H << endl;
		
		cout << "M:" << M << endl;
		
		cout << "S:" << S << endl;
		
		ret << H << ":" << M << ":" << S;
		
		return ret.str();
	}
};


int main(){
	
	
	Time test;
	
	cout << test.whatTime(3661) << endl;
	
}

