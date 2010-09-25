// BEGIN CUT HERE

// END CUT HERE
#line 5 "RunLengthEncoding.cpp"
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

class RunLengthEncoding {
public:
	string decode(string text) {
	string ret;
	bool ex=false;
	bool ex2=false;
	int num=0;

	fors(i,text){
		if(text[i] >= '0' && text[i] <= '9'){
			if(ex){
				if(ex2)	return "TOO LONG";
				num *=10;
				num += (text[i]-48);
				if(num > 50) return "TOO LONG";
				ex2 = true;
			}else{
				num = text[i]-48;
			}
			ex = true;
		}else{
			if(ex){
				for(int j=0;j<num;j++){
					ret += text[i];
				}
				num = 0;
				ex = false;
			}else{
				ret += text[i];
			}
		}

	}

	if((int)ret.size() > 50){
		return "TOO LONG";
	}else{
		return ret;
	}

	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "4A3BC2DE"; string Arg1 = "AAAABBBCDDE"; verify_case(0, Arg1, decode(Arg0)); }
	void test_case_1() { string Arg0 = "1A1B1C1D1E"; string Arg1 = "ABCDE"; verify_case(1, Arg1, decode(Arg0)); }
	void test_case_2() { string Arg0 = "1A3A5A4BCCCC"; string Arg1 = "AAAAAAAAABBBBCCCC"; verify_case(2, Arg1, decode(Arg0)); }
	void test_case_3() { string Arg0 = "50A"; string Arg1 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"; verify_case(3, Arg1, decode(Arg0)); }
	void test_case_4() { string Arg0 = "21Z13S9A8M"; string Arg1 = "TOO LONG"; verify_case(4, Arg1, decode(Arg0)); }
	void test_case_5() { string Arg0 = "123456789012345678901234567890B"; string Arg1 = "TOO LONG"; verify_case(5, Arg1, decode(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	RunLengthEncoding ___test;
	___test.run_test(-1);
}
// END CUT HERE
