// BEGIN CUT HERE

//   Incompleted end....

// END CUT HERE
#line 5 "AppleWord.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdio.h>

using namespace std;

class AppleWord {
public:
	int minRep(string word) {
		
		string apple = "APPLE";
		
		int not_p = 0;
		
		int not_apple = 0;
		
		cout << "\n" << "word = " << word << "\n" << endl;
		
		//For too short word
		if(word.size() < 5){
			return -1;
		}else{
			
			//if(apple[0]==word[0] || (apple[0]+32)==word[0]){	//a or A?
			if(word[0] =='a' || word[0] =='A' ){	//a or A?
				for(int i=1;i < word.size();i++){
					
					//printf("word[%d] = %c\n",i,word[i]);
					//cout << "apple[1] = " << (apple[1]+32) << endl;
					
					if(word[0] !='p' || word[0] !='P' ){	//p or P?
						
						cout << "Not P" << endl;
						
						//For apple word
						if(word[word.size()-2] =='l' || word[word.size()-2] =='L' ){	//l or L?
							
							cout << "L" << endl;
							
							if(word[word.size()-1] =='e' || word[word.size()-1] =='E' ){	//e or E?
								
								cout << "E" << endl;
								return 0;
								
							}else{
								not_p++;
								cout << "skip" << endl;
							}
						//For not apple word
						}else{
							not_p++;
							cout << "skip" << endl;
						}
						
					}
				}
				return not_p;
			}
		//For replace word
		}
		cout << "enter else" << endl;
		
		for(int i=0;i<apple.size();i++){
			if(apple[i]+32 != word[i] || (apple[i]+32) != word[i]){
				
				cout << "word[i] =" << word[i] << endl;
				
				cout << "apple[i] =" << apple[i] << endl;
				
				not_apple++;
			}
		}
		
		cout << not_apple << endl;
		
		not_apple += word.size() - apple.size();
		
		return not_apple;
	}
	
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "Apple"; int Arg1 = 0; verify_case(0, Arg1, minRep(Arg0)); }
	void test_case_1() { string Arg0 = "apPpPPlE"; int Arg1 = 0; verify_case(1, Arg1, minRep(Arg0)); }
	void test_case_2() { string Arg0 = "APLE"; int Arg1 = -1; verify_case(2, Arg1, minRep(Arg0)); }
	void test_case_3() { string Arg0 = "TopCoder"; int Arg1 = 7; verify_case(3, Arg1, minRep(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	AppleWord ___test;
	___test.run_test(-1);
}
// END CUT HERE
