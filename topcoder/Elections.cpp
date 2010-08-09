// BEGIN CUT HERE

// END CUT HERE
#line 5 "Elections.cpp"
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

class Elections {
public:
	int visit(vector <string> lh) {
	int ret=0;
	long double per;
	int fir=0;
	long double min_per=1.0;

	for(int i=(int)lh.size()-1;i>-1;i--){
		fir=0;
		fors(j,lh[i]){
			if(lh[i][j]=='1'){
				fir++;
			}
		}
		per = (long double)fir/(long double)lh[i].size();
		if(min_per >= per){
			min_per = per;
			ret = i;
		}
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"1222","1122","1222"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(0, Arg1, visit(Arg0)); }
	void test_case_1() { string Arr0[] = {"1222111122","2222222111","11111222221222222222"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(1, Arg1, visit(Arg0)); }
	void test_case_2() { string Arr0[] = {"111","112","121","122","211","212","221","222"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; verify_case(2, Arg1, visit(Arg0)); }
	void test_case_3() { string Arr0[] = {"1122","1221","1212","2112","2121","2211"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(3, Arg1, visit(Arg0)); }
	void test_case_4() { string Arr0[] = {"11112222111121","1211221212121","112111222","11122222222111","112121222","1212122211112"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(4, Arg1, visit(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	Elections ___test;
	___test.run_test(-1);
}
// END CUT HERE
