// BEGIN CUT HERE

// END CUT HERE
#line 5 "ArrayHash.cpp"
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

class ArrayHash {
public:
	int getHash(vector <string> input) {

	int ret =0;

	forv(i,input){
		fors(j,input[i]){
			//ret += (i+j+input[i][j]-65);
			ret += (i+j+input[i][j]-'A');
		}
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"CBA",
 "DDD"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 21; verify_case(0, Arg1, getHash(Arg0)); }
	void test_case_1() { string Arr0[] = {"Z"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 25; verify_case(1, Arg1, getHash(Arg0)); }
	void test_case_2() { string Arr0[] = {"A",
 "B",
 "C",
 "D",
 "E",
 "F"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 30; verify_case(2, Arg1, getHash(Arg0)); }
	void test_case_3() { string Arr0[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZ"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4290; verify_case(3, Arg1, getHash(Arg0)); }
	void test_case_4() { string Arr0[] = {"ZZZZZZZZZZ"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 295; verify_case(4, Arg1, getHash(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	ArrayHash ___test;
	___test.run_test(-1);
}
// END CUT HERE
