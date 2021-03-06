// BEGIN CUT HERE

// END CUT HERE
#line 5 "TwoRotationCypher.cpp"
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

class TwoRotationCypher {
public:
	string encrypt(int fS, int fR, int sR, string mes) {
	string ret;
	
	fors(i,mes){
		if(mes[i]!=' '){
			if(mes[i]<'a'+fS){
				if(fR==0){
					ret += mes[i]-fR;
				}else{
					int rot = -fR+1;
					if(mes[i]+rot<'a'){
						rot+=fS;
					}
					ret += mes[i]+rot;
				}
			}else{
				if(sR==0){
					ret += mes[i]-sR;
				}else{
					int rot = -sR+1;
					if(mes[i]+rot<'a'){
						rot+=26-fS;
					}
					ret += mes[i]-sR+1;
				}			
			}
		}else{
			ret += mes[i];
		}
	}


	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 13; int Arg1 = 0; int Arg2 = 0; string Arg3 = "this string will not change at all"; string Arg4 = "this string will not change at all"; verify_case(0, Arg4, encrypt(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 13; int Arg1 = 7; int Arg2 = 0; string Arg3 = "only the letters a to m in this string change"; string Arg4 = "onfy tbl flttlrs h to g cn tbcs strcna jbhnal"; verify_case(1, Arg4, encrypt(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 9; int Arg1 = 0; int Arg2 = 16; string Arg3 = "j to z will change here"; string Arg4 = "z sn y vikk chamge heqe"; verify_case(2, Arg4, encrypt(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 17; int Arg1 = 9; int Arg2 = 5; string Arg3 = "the quick brown fox jumped over the lazy dog"; string Arg4 = "yqn izalc kwgsf ogt bzehnm grnw yqn djvu mgp"; verify_case(3, Arg4, encrypt(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 3; int Arg1 = 1; int Arg2 = 2; string Arg3 = "  watch   out for strange  spacing "; string Arg4 = "  ybvaj   qwv hqt uvtbpig  urbakpi "; verify_case(4, Arg4, encrypt(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	TwoRotationCypher ___test;
	___test.run_test(-1);
}
// END CUT HERE
