// BEGIN CUT HERE

// END CUT HERE
#line 5 "AgeEncoding.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class AgeEncoding {
public:
	double getRadix(int age, string candlesLine) {

	long double base = 0.0;

	for(int i=0;i<(int)candlesLine.size();i++){
		if(candlesLine[i]=='1') ;
	}
	
	return base;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 10; string Arg1 = "00010"; double Arg2 = 10.0; verify_case(0, Arg2, getRadix(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 21; string Arg1 = "10101"; double Arg2 = 2.0; verify_case(1, Arg2, getRadix(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 6; string Arg1 = "10100"; double Arg2 = 1.414213562373095; verify_case(2, Arg2, getRadix(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 21; string Arg1 = "10111111110111101111111100111111110111111111111100"; double Arg2 = 0.9685012944510603; verify_case(3, Arg2, getRadix(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 16; string Arg1 = "1"; double Arg2 = -1.0; verify_case(4, Arg2, getRadix(Arg0, Arg1)); }
	void test_case_5() { int Arg0 = 1; string Arg1 = "1"; double Arg2 = -2.0; verify_case(5, Arg2, getRadix(Arg0, Arg1)); }
	void test_case_6() { int Arg0 = 1; string Arg1 = "001000"; double Arg2 = 1.0; verify_case(6, Arg2, getRadix(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	AgeEncoding ___test;
	___test.run_test(-1);
}
// END CUT HERE
