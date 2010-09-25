// BEGIN CUT HERE

// END CUT HERE
#line 5 "SwimmersDelight.cpp"
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

class SwimmersDelight {
public:
	int longestJump(vector <int> x, vector <int> y) {
	vector <int> xx=x;
	vector <int> yy=y;
	int ret=0;
	
	if(xx[0]>xx[1]){
		swap(xx[0],xx[1]);
		swap(yy[0],yy[1]);
	}
	//left to stone.
	ret = xx[0];
	
	int s1s2 = ud(xx[0],xx[1],yy[0],yy[1]);
	if(10-xx[0]<=s1s2){
		//stone1 to right.
		ret = max(ret,10-xx[0]);
	}else{
		//stone1 to stone2.
		ret = max(ret,s1s2);

		//stone2 to right.
		ret = max(ret,10-xx[1]);
	}

//------	

	int ret2=0;
	//left to stone2.
	ret2 = xx[1];

	//stone2 to right.
	ret2 = max(ret2,10-xx[1]);

	return min(ret,ret2);
	}
private:
	int ud(int x1,int x2,int y1,int y2){
	double r=0.0;
	
	r = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	
	r = round(r);
	
	return (int)r;
	}
	
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {3,7}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {5,5}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 4; verify_case(0, Arg2, longestJump(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {3,6}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {5,2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 4; verify_case(1, Arg2, longestJump(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {4,6}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 9; verify_case(2, Arg2, longestJump(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {3,8}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0,10}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 7; verify_case(3, Arg2, longestJump(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {4,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {5,5}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 6; verify_case(4, Arg2, longestJump(Arg0, Arg1)); }
	void test_case_5() { int Arr0[] = {2,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {10,1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 8; verify_case(5, Arg2, longestJump(Arg0, Arg1)); }
// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	SwimmersDelight ___test;
	___test.run_test(-1);
}
// END CUT HERE
