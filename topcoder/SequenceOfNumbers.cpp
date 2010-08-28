// BEGIN CUT HERE

// END CUT HERE
#line 5 "SequenceOfNumbers.cpp"
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

class SequenceOfNumbers {
public:
	vector <string> rearrange(vector <string> seq) {
	vector <string> ret;
	vector <int> num;

	forv(i,seq){
		stringstream ss;
		int tmp;
		ss << seq[i];
		ss >> tmp;
		num.pb(tmp);
	}	
	sort(all(num));
	
	forv(i,num){
		stringstream ss;
		string str;
		ss << num[i];
		ss >> str;
		ret.pb(str);
	}


	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arr0[] = {"1","174","23","578","71","9"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"1", "9", "23", "71", "174", "578" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, rearrange(Arg0)); }
	void test_case_1() { string Arr0[] = {"172","172","172","23","23"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"23", "23", "172", "172", "172" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, rearrange(Arg0)); }
	void test_case_2() { string Arr0[] = {"183","2","357","38","446","46","628","734","741","838"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"2", "38", "46", "183", "357", "446", "628", "734", "741", "838" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, rearrange(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	SequenceOfNumbers ___test;
	___test.run_test(-1);
}
// END CUT HERE
