// BEGIN CUT HERE

// END CUT HERE
#line 5 "MixtureDensity.cpp"
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

class MixtureDensity {
public:
	double getDensity(vector <string> ing) {
	long double ret=0.0;
	int mass=0;
	int vol = 0;
	string sub;
	int t_mas=0;
	int t_vol=0;

	forv(i,ing){
		sscanf( ing[i].c_str(),"%d ml", &vol );
		sub = ing[i].substr(ing[i].find("weighing "));
		sscanf( sub.c_str(),"weighing %d g", &mass );
		t_mas += mass;
		t_vol += vol;
	}
	
	ret = (long double)t_mas/(long double)t_vol;

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"200 ml of oil, weighing 180 g"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 0.9; verify_case(0, Arg1, getDensity(Arg0)); }
	void test_case_1() { string Arr0[] = {"100 ml of dichloromethane, weighing 130 g", "100 ml of sea water, weighing 103 g"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 1.165; verify_case(1, Arg1, getDensity(Arg0)); }
	void test_case_2() { string Arr0[] = {"1000 ml of water, weighing 1000 g", "500 ml of orange juice concentrate, weighing 566 g"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 1.044; verify_case(2, Arg1, getDensity(Arg0)); }
	void test_case_3() { string Arr0[] = {"1000 ml of something   l i g h t, weighing 1 g"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 0.0010; verify_case(3, Arg1, getDensity(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	MixtureDensity ___test;
	___test.run_test(-1);
}
// END CUT HERE
