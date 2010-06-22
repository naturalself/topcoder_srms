// BEGIN CUT HERE

// END CUT HERE
#line 5 "InequalityChecker.cpp"
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

class InequalityChecker {
public:
	vector <int> getDifferences(int n) {
	vector <int> ret;
	int s=0;
	int left=0;
	int right=0;
	
	for(int i=0;i<n;i++){
		s += (int)pow(i,3.0);
	}
	s *=2;
	s += (int)pow(n,3.0);	
	s *=2;

	left = s - (int)pow(n,4.0);

	if((s-left)%4 == 0){
		left = left/4;
		right = 1;
	}else if((s-left)%2 == 0){
		left = left/2;
		right = 2;
	}else{
		right = 4;
	}
	ret.push_back(left);
	ret.push_back(right);

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arg0 = 2; int Arr1[] = { 1,  1 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, getDifferences(Arg0)); }
	void test_case_1() { int Arg0 = 3; int Arr1[] = { 9,  4 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, getDifferences(Arg0)); }
	void test_case_2() { int Arg0 = 100; int Arr1[] = { 2500,  1 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, getDifferences(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	InequalityChecker ___test;
	___test.run_test(-1);
}
// END CUT HERE
