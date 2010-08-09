// BEGIN CUT HERE

// END CUT HERE
#line 5 "ColorCode.cpp"
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

class ColorCode {
public:
	long long getOhms(vector <string> code) {
	long long ret=0;
	vector <string> reg;

	reg.pb("black");
	reg.pb("brown");
	reg.pb("red");
	reg.pb("orange");
	reg.pb("yellow");
	reg.pb("green");
	reg.pb("blue");
	reg.pb("violet");
	reg.pb("grey");
	reg.pb("white");

	forv(i,code){
		forv(j,reg){
			if(code[i]==reg[j]){
				if(i!=(int)code.size()-1){
					ret += j*(int)pow(10.0,((int)code.size()-i-2));
				}else{
					ret *= (int)pow(10.0,(double)j);
				}
			}
		}
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = { "yellow", "violet", "red" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 4700LL; verify_case(0, Arg1, getOhms(Arg0)); }
	void test_case_1() { string Arr0[] = { "orange", "red", "blue" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 32000000LL; verify_case(1, Arg1, getOhms(Arg0)); }
	void test_case_2() { string Arr0[] = { "white", "white", "white" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 99000000000LL; verify_case(2, Arg1, getOhms(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	ColorCode ___test;
	___test.run_test(-1);
}
// END CUT HERE
