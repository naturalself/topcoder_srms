// BEGIN CUT HERE

// END CUT HERE
#line 5 "DiagonalDisproportion.cpp"
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

class DiagonalDisproportion {
public:
	int getDisproportion(vector <string> mat) {
	int ret=0;
	int mainmat=0;
	int colmat=0;
	int n=(int)mat.size();

	forv(i,mat){
		fors(j,mat[i]){
			if(i==j){
				mainmat += mat[i][j]-'0';
			}
			if((n-i-1)==j){
				colmat += mat[i][j]-'0';
			}
		}
	}

	ret = mainmat-colmat;

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"190","828","373"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, getDisproportion(Arg0)); }
	void test_case_1() { string Arr0[] = {"9000","0120","0000","9000"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(1, Arg1, getDisproportion(Arg0)); }
	void test_case_2() { string Arr0[] = {"6"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(2, Arg1, getDisproportion(Arg0)); }
	void test_case_3() { string Arr0[] = {"7748297018","8395414567","7006199788","5446757413","2972498628",
"0508396790","9986085827","2386063041","5687189519","7729785238"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -24; verify_case(3, Arg1, getDisproportion(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	DiagonalDisproportion ___test;
	___test.run_test(-1);
}
// END CUT HERE
