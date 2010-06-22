// BEGIN CUT HERE

// END CUT HERE
#line 5 "NoisySensor.cpp"
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

class NoisySensor {
public:
	vector <int> medianFilter(vector <int> data) {
	vector <int> ret=data;
	int m=0;

	for(int i=0;i<(int)data.size()-2;++i){
		m = med_f(data[i],data[i+1],data[i+2]);
		ret[i+1] = m;
	}

	return ret;
	}
private:
	int med_f(int a,int b,int c){
	int r = -1;

	if(a <= b && b <= c){
		return b;
	}
	if(a <= c && c <= b){
		return c;
	}

	if(b <= c && c <= a){
		return c;
	}
	if(b <= a && a <= c){
		return a;
	}

	if(c <= b && b <= a){
		return b;
	}
	if(c <= a && a <= b){
		return a;
	}

	return r;
	}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arr0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, medianFilter(Arg0)); }
	void test_case_1() { int Arr0[] = {10, 1, 9, 2, 8}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {10, 9, 2, 8, 8 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, medianFilter(Arg0)); }
	void test_case_2() { int Arr0[] = {500, 500, 500, 500, 500}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {500, 500, 500, 500, 500 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, medianFilter(Arg0)); }
	void test_case_3() { int Arr0[] = {-2147483648, 2147483647}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-2147483648, 2147483647 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, medianFilter(Arg0)); }
	void test_case_4() { int Arr0[] = {432296535, 1983848899, -434724194, 135703525, -1146336142,
-680568092, -1183352724, 1337550909, -1597342716, -1901441857,
1726722019, -558651015, 649930787, 1889036519, 1752815826,
930647381, -852547667, 2028345278, -1835531493, -1040566300,
-1566043783, -1282411107, -1123988603, 2132078516, -1169614369,
-523503536, 1466102514, -2003903121, -779001645, 1919742042,
1210980485, -9273881, 1033032137, -1474003783, 296280591,
920184999, -1235054743, -1329769514, -1727085135}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {432296535, 432296535, 135703525, -434724194, -680568092, -1146336142, -680568092, -1183352724, -1597342716, -1597342716, -558651015, 649930787, 649930787, 1752815826, 1752815826, 930647381, 930647381, -852547667, -1040566300, -1566043783, -1282411107, -1282411107, -1123988603, -1123988603, -523503536, -523503536, -523503536, -779001645, -779001645, 1210980485, 1210980485, 1033032137, -9273881, 296280591, 296280591, 296280591, -1235054743, -1329769514, -1727085135 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, medianFilter(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	NoisySensor ___test;
	___test.run_test(-1);
}
// END CUT HERE
