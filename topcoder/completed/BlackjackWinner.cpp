// BEGIN CUT HERE

// END CUT HERE
#line 5 "BlackjackWinner.cpp"
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

class BlackjackWinner {
public:
	int winnings(int bet, int d, int db, int p, int pb) {

	if(d>21 && p>21){
		return -bet;
	}

	if(d==21 && p==21){
		if(db==pb){
			return 0;
		}

		if(db==1){
			return -bet;
		}else{
			return (int)((double)bet*1.5);
		}
	}
	
	if(d < p){
		if(p <= 21){
			if(pb==1){
				return (int)((double)bet*1.5);
			}else{
				return bet;
			}
		}else{
			return -bet;
		}
	}

	if(d > p){
		if(d <=21){
			return -bet;
		}else{
			if(pb==1){
				return (int)((double)bet*1.5);
			}else{
				return bet;
			}
		}
	}

	if(d == p){
		return 0;
	}

	return bet;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 10; int Arg1 = 20; int Arg2 = 0; int Arg3 = 21; int Arg4 = 0; int Arg5 = 10; verify_case(0, Arg5, winnings(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_1() { int Arg0 = 26; int Arg1 = 21; int Arg2 = 1; int Arg3 = 21; int Arg4 = 0; int Arg5 = -26; verify_case(1, Arg5, winnings(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_2() { int Arg0 = 100; int Arg1 = 25; int Arg2 = 0; int Arg3 = 21; int Arg4 = 1; int Arg5 = 150; verify_case(2, Arg5, winnings(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_3() { int Arg0 = 78; int Arg1 = 22; int Arg2 = 0; int Arg3 = 23; int Arg4 = 0; int Arg5 = -78; verify_case(3, Arg5, winnings(Arg0, Arg1, Arg2, Arg3, Arg4)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	BlackjackWinner ___test;
	___test.run_test(-1);
}
// END CUT HERE
