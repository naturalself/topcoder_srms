// BEGIN CUT HERE

// END CUT HERE
#line 5 "SignatureDecorator.cpp"
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

class SignatureDecorator {
public:
	string applyDecoration(string name, vector <string> com, 
						   vector <string> deco) {
	
	string ret = name;

	forv(i,com){
		if(com[i] == "append"){
			ret += deco[i];
		}else if(com[i] == "prepend"){
			ret = deco[i] + ret;
		}else{
			ret = deco[i] + ret;
			reverse(all(deco[i]));
			ret += deco[i];
		}
	}
	
	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "Bob"; string Arr1[] = {"surround", "append", "prepend"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arr2[] = {"-=", "(", ")"}; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); string Arg3 = ")-=Bob=-("; verify_case(0, Arg3, applyDecoration(Arg0, Arg1, Arg2)); }
	void test_case_1() { string Arg0 = "Super_Man_01"; string Arr1[] = {}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arr2[] = {}; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); string Arg3 = "Super_Man_01"; verify_case(1, Arg3, applyDecoration(Arg0, Arg1, Arg2)); }
	void test_case_2() { string Arg0 = "4BcD3FgHIjklMN0pqrS7uVWxYZ_"; string Arr1[] = {"append", "prepend", "surround"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arr2[] = {"`{[(", ")]}'", ",.;<>?:|-=_+!@#$%^&*~"}; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); string Arg3 = ",.;<>?:|-=_+!@#$%^&*~)]}'4BcD3FgHIjklMN0pqrS7uVWxYZ_`{[(~*&^%$#@!+_=-|:?><;.,"; verify_case(2, Arg3, applyDecoration(Arg0, Arg1, Arg2)); }
	void test_case_3() { string Arg0 = "RacEcaR"; string Arr1[] = {"surround"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arr2[] = {"([{/"}; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); string Arg3 = "([{/RacEcaR/{[("; verify_case(3, Arg3, applyDecoration(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	SignatureDecorator ___test;
	___test.run_test(-1);
}
// END CUT HERE
