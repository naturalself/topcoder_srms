// BEGIN CUT HERE

// END CUT HERE
#line 5 "BoxLoader.cpp"
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

class BoxLoader {
public:
	int mostItems(int boxX, int boxY, int boxZ, int itemX, int itemY, int itemZ) {

	vector<int> vi;
	int mx=0;
	vi.push_back(itemX);
	vi.push_back(itemY);
	vi.push_back(itemZ);
	
	sort(all(vi));

	do{
		if(vi[0]>boxX || vi[1]>boxY || vi[2]>boxZ) continue;
		mx = max(mx,(boxX/vi[0])*(boxY/vi[1])*(boxZ/vi[2]));

	}while(next_permutation(all(vi)));

	return mx;
	}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 100; int Arg1 = 98; int Arg2 = 81; int Arg3 = 3; int Arg4 = 5; int Arg5 = 7; int Arg6 = 7560; verify_case(0, Arg6, mostItems(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }
	void test_case_1() { int Arg0 = 10; int Arg1 = 10; int Arg2 = 10; int Arg3 = 9; int Arg4 = 9; int Arg5 = 11; int Arg6 = 0; verify_case(1, Arg6, mostItems(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }
	void test_case_2() { int Arg0 = 201; int Arg1 = 101; int Arg2 = 301; int Arg3 = 100; int Arg4 = 30; int Arg5 = 20; int Arg6 = 100; verify_case(2, Arg6, mostItems(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }
	void test_case_3() { int Arg0 = 913; int Arg1 = 687; int Arg2 = 783; int Arg3 = 109; int Arg4 = 93; int Arg5 = 53; int Arg6 = 833; verify_case(3, Arg6, mostItems(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }
	void test_case_4() { int Arg0 = 6; int Arg1 = 5; int Arg2 = 4; int Arg3 = 3; int Arg4 = 2; int Arg5 = 1; int Arg6 = 20; verify_case(4, Arg6, mostItems(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	BoxLoader ___test;
	___test.run_test(-1);
}
// END CUT HERE
