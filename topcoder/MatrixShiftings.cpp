// BEGIN CUT HERE

// END CUT HERE
#line 5 "MatrixShiftings.cpp"
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

class MatrixShiftings {
public:
	int minimumShifts(vector <string> mat, int val) {
	vector <int> vm;
	vector <int> vn;
	int ret=100000;
	int cnt=0;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int m = (int)mat.size();
	int n = (int)mat[0].size();

	forv(i,mat){
		fors(j,mat[i]){
			if(mat[i][j] == (val+48)){
				vm.push_back(i);
				vn.push_back(j);
				cnt++;
			}
		}
	}
	if(cnt==0)	return -1;

	forv(i,vm){
		a = vm[i]+vn[i];
		b = (m-1 + n-1) - (vm[i]+vn[i])+2;
		c = (n-1) + vm[i]-vn[i] +1;
		d = (m-1) - vm[i]+vn[i] +1;
		ret = min(ret,min(min(a,b),min(c,d)));
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"136",
 "427",
 "568",
 "309"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 2; verify_case(0, Arg2, minimumShifts(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"0000",
 "0000",
 "0099"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 9; int Arg2 = 2; verify_case(1, Arg2, minimumShifts(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"0123456789"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; int Arg2 = 3; verify_case(2, Arg2, minimumShifts(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"555",
 "555"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; int Arg2 = -1; verify_case(3, Arg2, minimumShifts(Arg0, Arg1)); }
	void test_case_4() { string Arr0[] = {"12417727123",
 "65125691886",
 "55524912622",
 "12261288888"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 9; int Arg2 = 6; verify_case(4, Arg2, minimumShifts(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	MatrixShiftings ___test;
	___test.run_test(-1);
}
// END CUT HERE
