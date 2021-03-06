// BEGIN CUT HERE

// END CUT HERE
#line 5 "CarrotJumping.cpp"
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
#define all(a) a.begin(),a.end()
#define pb push_back

#define MOD 1000000007



class CarrotJumping {
public:
	int theJump(int init) {
#if 0
	int ret=1;
	unsigned long long x = init;

	printf("init=%d\n",init);

	for(int i=0;i<100000;i++){
		x = (4*x) + 3;  
		unsigned long long y = x*2+(i+1);

		if(x%1000000007==0 || y%1000000007==0){
			return ret;
		}

		ret++;
		break;
	}
	return -1;
#else
	unsigned long long int t1=4,t2=(init+1)%MOD;
	long long int j;

	for(j=2;j<=(3*100000);j++){
		if(t1*t2%MOD==1)	break;
		t1 *= 2;
		t1 %= MOD;
	}
	int ans=j;
	//cout << ans << endl;
	
	for(j=1;j<=100000;j++){
		int low=2*j;
		int up =3*j;
		if(ans>=low && ans <= up) break;
	}

	if(j==100001) j=-1;
	return j;
#endif
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 125000000; int Arg1 = 1; verify_case(0, Arg1, theJump(Arg0)); }
	void test_case_1() { int Arg0 = 281250001; int Arg1 = 2; verify_case(1, Arg1, theJump(Arg0)); }
	void test_case_2() { int Arg0 = 18426114; int Arg1 = 58; verify_case(2, Arg1, theJump(Arg0)); }
	void test_case_3() { int Arg0 = 4530664; int Arg1 = 478; verify_case(3, Arg1, theJump(Arg0)); }
	void test_case_4() { int Arg0 = 705616876; int Arg1 = 100000; verify_case(4, Arg1, theJump(Arg0)); }
	void test_case_5() { int Arg0 = 852808441; int Arg1 = -1; verify_case(5, Arg1, theJump(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	CarrotJumping ___test;
	___test.run_test(-1);
}
// END CUT HERE
