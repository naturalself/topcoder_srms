// BEGIN CUT HERE

// END CUT HERE
#line 5 "DancingSentence.cpp"
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

class DancingSentence {
public:
	string makeDancing(string sen) {
	string ret;
	int cnt=0;

	fors(i,sen){
		if(sen[i]==' '){
			ret += sen[i];
		}else{
			cnt++;

			if(cnt%2==1){
				ret += toupper(sen[i]);
			}else{
				ret += tolower(sen[i]);
			}
		}
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "This is a dancing sentence"; string Arg1 = "ThIs Is A dAnCiNg SeNtEnCe"; verify_case(0, Arg1, makeDancing(Arg0)); }
	void test_case_1() { string Arg0 = " This   is         a  dancing   sentence  "; string Arg1 = " ThIs   Is         A  dAnCiNg   SeNtEnCe  "; verify_case(1, Arg1, makeDancing(Arg0)); }
	void test_case_2() { string Arg0 = "aaaaaaaaaaa"; string Arg1 = "AaAaAaAaAaA"; verify_case(2, Arg1, makeDancing(Arg0)); }
	void test_case_3() { string Arg0 = "z"; string Arg1 = "Z"; verify_case(3, Arg1, makeDancing(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	DancingSentence ___test;
	___test.run_test(-1);
}
// END CUT HERE
