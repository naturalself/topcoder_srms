// BEGIN CUT HERE

// END CUT HERE
#line 5 "Truckloads.cpp"
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

class Truckloads {
public:
	int numTrucks(int numC, int load) {
	int ret=0;
	int cnt=0;

	debug(numC);
	debug(load);

	while(numC>=load){
		if(numC%2==0){
			numC /= 2;
			cnt++;
		}else{
			break;
		}
	}
	debug(numC);
	debug(cnt);

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 14; int Arg1 = 3; int Arg2 = 6; verify_case(0, Arg2, numTrucks(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 15; int Arg1 = 1; int Arg2 = 15; verify_case(1, Arg2, numTrucks(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 1024; int Arg1 = 5; int Arg2 = 256; verify_case(2, Arg2, numTrucks(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	Truckloads ___test;
	___test.run_test(-1);
}
// END CUT HERE
