#include<iostream>
#include<string>
#include<set>

using namespace std;

class DivisorDigits
{
	
public:
	
	int howMany(int number){
	
		int divisible_num = 0;
		
		int n=10;
		
		int digits[9] = {0,0,0,0,0,0,0,0,0};
		
		digits[0] = number % n;
		
		//cout << "digit = "<< digits[0] << endl;
		
		n *= 10;
		
		for(int i=1;i<9;i++){
			digits[i] = (number % n);
			
			for(int j=0;j<i;j++){
				digits[i] = digits[i] - digits[j];
			}
			
			digits[i] = digits[i]/(n/10);
			
			n *= 10;
			
			cout << "digit = "<< digits[i] << endl;
			
		}

		for(int i=0;i<9;i++){
			if(digits[i] != 0 && (number%digits[i]) == 0){
				divisible_num++;
			}
		}

		return divisible_num;
	};
};




int main()
{
	
	DivisorDigits test;
	
	//int ret = test.howMany(12345);
	
	int ret = test.howMany(661232);
	
	//int ret = test.howMany(52527);
	
	//int ret = test.howMany(730000000);
	
	//int ret = test.howMany(999999999);
	
	cout << "return = "<< ret << endl;
	
}

