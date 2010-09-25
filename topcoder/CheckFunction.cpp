// BEGIN CUT HERE

// END CUT HERE
#line 5 "CheckFunction.cpp"
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

#define debug(p) cout << #p << "=" << p << endl;
#define forv(i, v) for (int i = 0; i < (int)(v.size()); ++i)
#define fors(i, s) for (int i = 0; i < (int)(s.length()); ++i)
#define all(a) a.begin(), a.end() 
#define pb push_back

class CheckFunction {
public:
	int newFunction(string code) {
	int ret=0;

	fors(i,code){
		if(code[i]=='1'){
			ret += 2;
		}else if(code[i]=='7'){
			ret += 3;
		}else if(code[i]=='4'){
			ret += 4;
		}else if(code[i]=='8'){
			ret += 7;
		}else if(code[i]=='2' || code[i]=='3' || code[i]=='5'){
			ret += 5;
		}else if(code[i]=='0' || code[i]=='6' || code[i]=='9'){
			ret += 6;
		}
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "13579"; int Arg1 = 21; verify_case(0, Arg1, newFunction(Arg0)); }
	void test_case_1() { string Arg0 = "02468"; int Arg1 = 28; verify_case(1, Arg1, newFunction(Arg0)); }
	void test_case_2() { string Arg0 = "73254370932875002027963295052175"; int Arg1 = 157; verify_case(2, Arg1, newFunction(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	CheckFunction ___test;
	___test.run_test(-1);
}
// END CUT HERE
