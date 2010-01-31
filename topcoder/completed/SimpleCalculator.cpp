// BEGIN CUT HERE

// END CUT HERE
#line 5 "SimpleCalculator.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class SimpleCalculator {
public:
	int calculate(string input) {

	int rtr1=0;
	int rtr2=0;
	char calc = '\0';
	stringstream ss(input);	//ss << input;
	ss >> rtr1 >> calc >> rtr2;

	switch (calc){
		case '+':
			return (rtr1 + rtr2);
		case '-':
			return (rtr1 - rtr2);
		case '*':
			return (rtr1 * rtr2);
		case '/':
			return (rtr1 / rtr2);
		default:
			return -1;
	}
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "5/3"; int Arg1 = 1; verify_case(0, Arg1, calculate(Arg0)); }
	void test_case_1() { string Arg0 = "15*3"; int Arg1 = 45; verify_case(1, Arg1, calculate(Arg0)); }
	void test_case_2() { string Arg0 = "1-10000"; int Arg1 = -9999; verify_case(2, Arg1, calculate(Arg0)); }
	void test_case_3() { string Arg0 = "17+18"; int Arg1 = 35; verify_case(3, Arg1, calculate(Arg0)); }
	void test_case_4() { string Arg0 = "0000000000000018/00000000000000000009"; int Arg1 = 2; verify_case(4, Arg1, calculate(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	SimpleCalculator ___test;
	___test.run_test(-1);
}
// END CUT HERE
