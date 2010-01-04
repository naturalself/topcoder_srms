// BEGIN CUT HERE

// END CUT HERE
#line 5 "AppleWord.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class AppleWord {
public:
	int minRep(string word) {
		
		int len = word.size();
		int count = 0;
		
		if(len < 5) return -1;
		
		if(word[0] != 'a' && word[0] != 'A') count++;
		//See from back
		if(word[len-1] != 'e' && word[len-1] != 'E') count++;
		if(word[len-2] != 'l' && word[len-2] != 'L') count++;
		
		//See from forward
		for(int i=1;i<len-2;i++){
			if(word[i] != 'p' && word[i] != 'P') count++;
		}
		return count;
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
