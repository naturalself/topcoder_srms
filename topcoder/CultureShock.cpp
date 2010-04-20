// BEGIN CUT HERE

// END CUT HERE
#line 5 "CultureShock.cpp"
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

class CultureShock {
public:
	string translate(string text) {

		string ret = text;
		int n = (int)ret.size();

		fors(i,ret){
			if(ret[i]=='Z' && ret[i+1]=='E' && ret[i+2]=='E'){
				if(i==0 || ret[max(i-1,0)]==' '){
					if((i+3 == n) || ret[min(i+3,n)]==' '){
						ret[i+2]='D';
					}
				}
			}
		}

		return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "THE TWENTY SIXTH LETTER OF THE ALPHABET IS ZEE"; string Arg1 = "THE TWENTY SIXTH LETTER OF THE ALPHABET IS ZED"; verify_case(0, Arg1, translate(Arg0)); }
	void test_case_1() { string Arg0 = "ZEE"; string Arg1 = "ZED"; verify_case(1, Arg1, translate(Arg0)); }
	void test_case_2() { string Arg0 = "SPELLING IN ENGLISH IS EZEE"; string Arg1 = "SPELLING IN ENGLISH IS EZEE"; verify_case(2, Arg1, translate(Arg0)); }
	void test_case_3() { string Arg0 = "ZEE ZEE ZED ZEDS ZEE ZEES"; string Arg1 = "ZED ZED ZED ZEDS ZED ZEES"; verify_case(3, Arg1, translate(Arg0)); }
	void test_case_4() { string Arg0 = "ZEE ZEEZEE ZEEP ZEE ZE ZE"; string Arg1 = "ZED ZEEZEE ZEEP ZED ZE ZE"; verify_case(4, Arg1, translate(Arg0)); }
// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	CultureShock ___test;
	___test.run_test(-1);
}
// END CUT HERE
