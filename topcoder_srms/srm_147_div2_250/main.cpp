#include<iostream>
#include<string>

using namespace std;

class CCipher{
	
public:
	
	string decode(string cipherText ,int shift);
};

string CCipher::decode(string cipherText ,int shift){
	
	for(int i=0;i<cipherText.length();i++){
		
		for(int j=0;j<shift;j++){
			cipherText[i] = cipherText[i]-1;
			
			if(cipherText[i] < 'A'){
				cipherText[i] = 'Z';
			}
		}
	}
	
	return cipherText;
}


int main(){
	
	CCipher test;
	
	//string ret = test.decode("VQREQFGT",2);
	
	string ret = test.decode("ZWBGLZ",25);
	
	cout << "return = "<< ret << endl;
	
}

