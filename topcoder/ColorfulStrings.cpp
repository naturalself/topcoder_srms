// BEGIN CUT HERE

// END CUT HERE
#line 5 "ColorfulStrings.cpp"
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

class ColorfulStrings {
public:
	string getKth(int n, int k) {

	int digit[50];
	int div=10;
	int num = 0;

	for(int i=100;i<=999;i++){
		cout << i << "->";
		
		num = i;
		for(int j=0;j<n;j++){
			digit[j] = num%10;
			num /= 10;
		}
		for(int j=n-1;j>-1;j--)	cout << digit[j] << " ";
		cout << endl;

		if(i==110)	break;
	}

	return "";
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 4; string Arg2 = "238"; verify_case(0, Arg2, getKth(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 4; int Arg1 = 2000; string Arg2 = ""; verify_case(1, Arg2, getKth(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 5; int Arg1 = 1; string Arg2 = "23457"; verify_case(2, Arg2, getKth(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 2; int Arg1 = 22; string Arg2 = "52"; verify_case(3, Arg2, getKth(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 6; int Arg1 = 464; string Arg2 = "257936"; verify_case(4, Arg2, getKth(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	ColorfulStrings ___test;
	___test.run_test(0);
}
// END CUT HERE
