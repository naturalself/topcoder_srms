// BEGIN CUT HERE

// END CUT HERE
#line 5 "MicrowaveSelling.cpp"
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

class MicrowaveSelling {
public:
	int mostAttractivePrice(int minP, int maxP) {
	int ret = maxP;
	int max_cnt = 0;
	for(int i=maxP;i>=minP;i--){
		stringstream ss;
		ss << i;
		string num;
		ss >> num;
		int n = (int)num.size();
		int cnt=0;
		for(int j=n-1;j>=0;j--){
			if(num[j]=='9'){
				cnt++;
			}else{
				break;
			}
		}
		if(cnt > max_cnt){
			max_cnt = cnt;
			ret = i;
			//debug(i);
		}
		if(max_cnt == (int)num.size()){
			break;
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
	void test_case_0() { int Arg0 = 460; int Arg1 = 680; int Arg2 = 599; verify_case(0, Arg2, mostAttractivePrice(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 10; int Arg1 = 1000; int Arg2 = 999; verify_case(1, Arg2, mostAttractivePrice(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 1255; int Arg1 = 2999; int Arg2 = 2999; verify_case(2, Arg2, mostAttractivePrice(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 20; int Arg1 = 25; int Arg2 = 25; verify_case(3, Arg2, mostAttractivePrice(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 1; int Arg1 = 1000000; int Arg2 = 999999; verify_case(4, Arg2, mostAttractivePrice(Arg0, Arg1));}

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	MicrowaveSelling ___test;
	___test.run_test(-1);
}
// END CUT HERE
