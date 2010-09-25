// BEGIN CUT HERE

// END CUT HERE
#line 5 "BasketsWithApples.cpp"
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

class BasketsWithApples {
public:
	int removeExcess(vector <int> apples) {
	int max_num=0;
	
	forv(i,apples){
		int mul=(int)apples.size();
		forv(j,apples){
			if(i!=j){
				if(apples[i]>apples[j]){
					mul--;
				}
			}
		}	
		max_num = max(max_num,mul*apples[i]);
	}
	

	return max_num;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1, 2, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(0, Arg1, removeExcess(Arg0)); }
	void test_case_1() { int Arr0[] = {5, 0, 30, 14}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 30; verify_case(1, Arg1, removeExcess(Arg0)); }
	void test_case_2() { int Arr0[] = {51, 8, 38, 49}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 114; verify_case(2, Arg1, removeExcess(Arg0)); }
	void test_case_3() { int Arr0[] = {24, 92, 38, 0, 79, 45}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 158; verify_case(3, Arg1, removeExcess(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	BasketsWithApples ___test;
	___test.run_test(-1);
}
// END CUT HERE
