// BEGIN CUT HERE

// END CUT HERE
#line 5 "FarFromPrimes.cpp"
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

class FarFromPrimes {
public:
	int count(int A, int B) {
	int ret=0;
	bool memo[B];
	
	memset(memo,0x00,B);

	for(int i=A-10;i<=B+10;i++){
		memo[i]=isPrime(i);
	}

	for(int i=A;i<=B;i++){
		int cnt=0;
		for(int j=i-10;j<=i+10;j++){
			if(memo[j]==true){
				cnt++;
			}
		}
		if(cnt == 0){
			ret++;
		}
	}

	return ret;
	}
private:
	bool isPrime(int a){

	if(a < 2) return false;	

	if(a==2) return true;
	
	if(a%2==0)	return false;

	for(int i=3;i*i<=a;i+=2){
		if(a%i==0)	return false;
	}

	return true;
	}
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3328; int Arg1 = 4100; int Arg2 = 4; verify_case(0, Arg2, count(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 10; int Arg1 = 1000; int Arg2 = 0; verify_case(1, Arg2, count(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 19240; int Arg1 = 19710; int Arg2 = 53; verify_case(2, Arg2, count(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 23659; int Arg1 = 24065; int Arg2 = 20; verify_case(3, Arg2, count(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 97001; int Arg1 = 97691; int Arg2 = 89; verify_case(4, Arg2, count(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	FarFromPrimes ___test;
	___test.run_test(-1);
}
// END CUT HERE
