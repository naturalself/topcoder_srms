// BEGIN CUT HERE

// END CUT HERE
#line 5 "FuelConsumption.cpp"
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

class FuelConsumption {
public:
	double maximalDistance(vector <int> vel, vector <int> con, int fuel) {

	double ret=0.0;
	long double per=0.0;
	long double per_m=1000000.0;
	int idx=0;

	forv(i,vel){
		per = (long double)con[i]/(long double)vel[i];
		if(per_m > per){
			per_m = per;
			idx = i;
		}
	}
	ret = (long double)(fuel)*
			(long double)(vel[idx])/(long double)(con[idx]);

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {100}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {10000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 10000; double Arg3 = 100.0; verify_case(0, Arg3, maximalDistance(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arr0[] = {70, 80, 90, 100, 60, 110}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {4000, 4000, 4000, 4000, 4000, 4000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 40000; double Arg3 = 1100.0; verify_case(1, Arg3, maximalDistance(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arr0[] = {250, 240, 230, 220, 210, 211}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {5000, 4500, 4000, 3500, 3000, 3000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 50000; double Arg3 = 3516.6666666666665; verify_case(2, Arg3, maximalDistance(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arr0[] = {5, 10, 20, 40, 80}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1000, 2500, 6250, 9000, 18000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 47832; double Arg3 = 239.16; verify_case(3, Arg3, maximalDistance(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arr0[] = {5, 10, 20, 40, 80, 160}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1000, 2500, 6250, 8000, 9500, 20000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 47832; double Arg3 = 402.79578947368424; verify_case(4, Arg3, maximalDistance(Arg0, Arg1, Arg2)); }
	void test_case_5() { int Arr0[] = {240, 195, 130, 133, 15, 160, 111, 206, 72, 149,
 146, 115, 235, 183, 102, 96, 163, 61, 196, 52,
 87, 139, 33, 7, 90, 67, 118, 227, 197, 114}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {14837, 2981, 17292, 18591, 4832, 7461, 17991, 18369, 18291, 9400,
 15179, 3317, 2595, 2441, 6936, 8028, 14973, 18981, 12503, 7816,
 2883, 6385, 6230, 18157, 16567, 9310, 2866, 4687, 14171, 4477}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 31710; double Arg3 = 2871.6184971098264; verify_case(5, Arg3, maximalDistance(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	FuelConsumption ___test;
	___test.run_test(-1);
}
// END CUT HERE
