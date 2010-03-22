// BEGIN CUT HERE

// END CUT HERE
#line 5 "Reppity.cpp"
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;

#define forv(i, v) for (int i = 0; i < (int)(v.size()); ++i)
#define fors(i, s) for (int i = 0; i < (int)(s.length()); ++i)
#define all(a) a.begin(), a.end() 

class Reppity {
public:
	int longestRep(string input) {
		
	string word;
	int max_s=0;

	//i:start pos
	for(int i=0;i<(int)input.size();i++){
			
		//j:word length
		for(int j=(int)(input.size()/2);j>0;j--){
			//set word
			word = input.substr(i,j);

			int idx1 = input.find(word);
			int idx2 = input.rfind(word);

			if(idx1 != idx2 && idx2 >= (i+j)){
#if 0				
				//cout << "idx1:" << idx1 << " " 
				//	 << " find:" << input.substr(idx1,j) << endl;
				//cout << "idx2:" << idx2 << " "
				//	 << "rfind:" << input.substr(idx2,j) << endl;
#endif
				max_s = max(max_s,(int)word.size());
				break;
			}
		}
	}

	return max_s;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0();  if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5();}
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "ABCDEXXXYYYZZZABCDEZZZYYYXXX"; int Arg1 = 5; verify_case(0, Arg1, longestRep(Arg0)); }
	void test_case_1() { string Arg0 = "abcdabcdabcdabCD"; int Arg1 = 6; verify_case(1, Arg1, longestRep(Arg0)); }
	void test_case_2() { string Arg0 = "abcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxy"; int Arg1 = 25; verify_case(2, Arg1, longestRep(Arg0)); }
	void test_case_3() { string Arg0 = "againANDagainANDagainANDagainANDagainANDagain"; int Arg1 = 21; verify_case(3, Arg1, longestRep(Arg0)); }
	void test_case_4() { string Arg0 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX"; int Arg1 = 0; verify_case(4, Arg1, longestRep(Arg0)); }
	void test_case_5() { string Arg0 = "aabbaaabbbaaaabbbbaaaaabbbbbaaaaaabbbbbbaaaaabbbbb"; int Arg1 = 14; verify_case(5, Arg1, longestRep(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	Reppity ___test;
	___test.run_test(-1);
}
// END CUT HERE
