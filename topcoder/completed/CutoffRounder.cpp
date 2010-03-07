// BEGIN CUT HERE

// END CUT HERE
#line 5 "CutoffRounder.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>


using namespace std;

class CutoffRounder {
public:
	int round(string num, string cutoff) {

	double num_d=0.0;
	double cutoff_d=0.0;
	double num_dem=0.0;

	sscanf(num.c_str(),"%lf",&num_d);
	sscanf(cutoff.c_str(),"%lf",&cutoff_d);

	if(num_d < 1.0){
		if(num_d >= cutoff_d){
			return (int)(num_d+1.0);
		}else{
			return (int)(num_d);
		}
	}

	num_dem = (double)(num_d-(int)num_d);
	
	if(num_dem >= cutoff_d){
		return (int)(num_d+1.0);
	}else{
		return (int)(num_d);
	}
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "003.656930"; string Arg1 = "0.5000"; int Arg2 = 4; verify_case(0, Arg2, round(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = ".001"; string Arg1 = "0.0001"; int Arg2 = 1; verify_case(1, Arg2, round(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "1.99999999"; string Arg1 = "0.9999"; int Arg2 = 2; verify_case(2, Arg2, round(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "135"; string Arg1 = "0.6531"; int Arg2 = 135; verify_case(3, Arg2, round(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "135."; string Arg1 = "0.6531"; int Arg2 = 135; verify_case(4, Arg2, round(Arg0, Arg1)); }
	void test_case_5() { string Arg0 = "1356.13671"; string Arg1 = "0.1367"; int Arg2 = 1357; verify_case(5, Arg2, round(Arg0, Arg1)); }
	void test_case_6() { string Arg0 = "0.00010001"; string Arg1 = "0.0001"; int Arg2 = 1; verify_case(6, Arg2, round(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	CutoffRounder ___test;
	___test.run_test(-1);
}
// END CUT HERE
