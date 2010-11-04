// BEGIN CUT HERE

// END CUT HERE
#line 5 "IndicatorMotion.cpp"
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

class IndicatorMotion {
public:
	string getMotion(string prog, char sta) {
	string ret;
	ret = sta;

	for(int i=0;i<(int)prog.size();i+=3){
	
		int sec = 10*(prog[i+1]-'0') + (prog[i+2]-'0');
		for(int j=0;j<sec;j++){
			ret += chsts(ret[(int)ret.size()-1],prog[i]);
		}		
	}
	
	return ret;
	}
private:
	char chsts(char cur,char cmd){
	char st[4] = {'|','\\','-','/'};
	int cur_idx = 0;

	for(int i=0;i<4;i++){
		if(st[i] == cur){
			cur_idx = i;
			break;
		}
	}

	if(cmd=='F'){
		return st[(cur_idx+2+4)%4];
	}else if(cmd=='R'){
		return st[(cur_idx-1+4)%4];
	}else if(cmd=='L'){
		return st[(cur_idx+1+4)%4];
	}else{
		return cur;
	}

	}
	

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "F03L02R03S02F04"; char Arg1 = '-'; string Arg2 = "-|-|\\-\\|///\\/\\/"; verify_case(0, Arg2, getMotion(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "F10R01F10"; char Arg1 = '/'; string Arg2 = "/\\/\\/\\/\\/\\/-|-|-|-|-|-"; verify_case(1, Arg2, getMotion(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = ""; char Arg1 = '/'; string Arg2 = "/"; verify_case(2, Arg2, getMotion(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "F00R00L00S00"; char Arg1 = '\\'; string Arg2 = "\\"; verify_case(3, Arg2, getMotion(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	IndicatorMotion ___test;
	___test.run_test(-1);
}
// END CUT HERE
