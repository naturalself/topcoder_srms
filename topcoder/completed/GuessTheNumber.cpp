// BEGIN CUT HERE

// END CUT HERE
#line 5 "GuessTheNumber.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class GuessTheNumber {
public:
	int noGuesses(int upper, int answer) {
	
	int x=0;
	int lower=1;
	int count=0;

	while(x!=answer){
		count++;
		x = (lower+upper)/2;
		if(answer>x){
			lower = x+1;
		}else{
			upper = x-1;
		}
	}
	return count;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 9; int Arg1 = 6; int Arg2 = 3; verify_case(0, Arg2, noGuesses(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 1000; int Arg1 = 750; int Arg2 = 2; verify_case(1, Arg2, noGuesses(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 643; int Arg1 = 327; int Arg2 = 7; verify_case(2, Arg2, noGuesses(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 157; int Arg1 = 157; int Arg2 = 8; verify_case(3, Arg2, noGuesses(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 128; int Arg1 = 64; int Arg2 = 1; verify_case(4, Arg2, noGuesses(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	GuessTheNumber ___test;
	___test.run_test(-1);
}
// END CUT HERE
