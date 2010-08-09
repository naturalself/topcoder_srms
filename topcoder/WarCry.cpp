// BEGIN CUT HERE

// END CUT HERE
#line 5 "WarCry.cpp"
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

class WarCry {
public:
	int alertTime(string os) {
	int itvnum=0;
	int max_itv=0;
	int ret=0;
	bool x_eflag=false;
	

	fors(i,os){
		if(os[i]=='-' && i!=((int)os.size()-1)){
			itvnum++;
		}else{
			if(x_eflag==false || os[(int)os.size()]=='-'){
				max_itv = max(max_itv,itvnum);
			}else{
				
				max_itv = max(max_itv,(itvnum+1)/2);
			}
			itvnum=0;
			x_eflag=true;
		}
	}

	ret = max_itv;
	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); if ((Case == -1) || (Case == 8)) test_case_8(); if ((Case == -1) || (Case == 9)) test_case_9();}
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "-x---x-"; int Arg1 = 2; verify_case(0, Arg1, alertTime(Arg0)); }
	void test_case_1() { string Arg0 = "xx--xx"; int Arg1 = 1; verify_case(1, Arg1, alertTime(Arg0)); }
	void test_case_2() { string Arg0 = "xx----xx"; int Arg1 = 2; verify_case(2, Arg1, alertTime(Arg0)); }
	void test_case_3() { string Arg0 = "xx-------xx"; int Arg1 = 4; verify_case(3, Arg1, alertTime(Arg0)); }
	void test_case_4() { string Arg0 = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"; int Arg1 = 0; verify_case(4, Arg1, alertTime(Arg0)); }
	void test_case_5() { string Arg0 = "x------------------------------------------------x"; int Arg1 = 24; verify_case(5, Arg1, alertTime(Arg0)); }
	void test_case_6() { string Arg0 = "--x----x----x--"; int Arg1 = 2; verify_case(6, Arg1, alertTime(Arg0)); }
	void test_case_7() { string Arg0 = "x"; int Arg1 = 0; verify_case(7, Arg1, alertTime(Arg0)); }
	void test_case_8() { string Arg0 = "------------------------x------------------------x"; int Arg1 = 24; verify_case(8, Arg1, alertTime(Arg0));}
	void test_case_9() { string Arg0 = "x---------------------------------"; int Arg1 = 33; verify_case(9, Arg1, alertTime(Arg0));}


// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	WarCry ___test;
	___test.run_test(-1);
}
// END CUT HERE
