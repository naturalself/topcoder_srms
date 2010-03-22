// BEGIN CUT HERE

// END CUT HERE
#line 5 "Education.cpp"
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

class Education {
public:
	int minimize(string desire, vector <int> tests) {

	double sum = accumulate(all(tests),0);
	double aim = 0.0;
	
	if(desire == "A"){
		aim = 90.0;
	}else if(desire =="B"){
		aim = 80.0;
	}else if(desire == "C"){
		aim = 70.0;
	}else if(desire == "D"){
		aim = 60.0;
	}
	
	if((int)tests.size() == 0)	return (int)aim;
	
	if(aim*(double)(tests.size()+1)-sum <= 0)	return 0;

	if((aim*(double)(tests.size()+1)-sum) > 100){
		return -1;
	}else{
		return (int)(aim*(double)(tests.size()+1)-sum);
	}

	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "A"; int Arr1[] = {0,70}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -1; verify_case(0, Arg2, minimize(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "D"; int Arr1[] = {100,100,100,100,100,100}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; verify_case(1, Arg2, minimize(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "B"; int Arr1[] = {80,80,80,73}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 87; verify_case(2, Arg2, minimize(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "B"; int Arr1[] = {80,80,80,73,79}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 88; verify_case(3, Arg2, minimize(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "A"; int Arr1[] = {80}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 100; verify_case(4, Arg2, minimize(Arg0, Arg1)); }

	void test_case_5() { string Arg0 = "C"; int Arr1[] = {}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 70; verify_case(5, Arg2, minimize(Arg0, Arg1)); }

	void test_case_6() { string Arg0 = "C"; int Arr1[] = {70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 71}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 69; verify_case(6, Arg2, minimize(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	Education ___test;
	___test.run_test(-1);
}
// END CUT HERE
