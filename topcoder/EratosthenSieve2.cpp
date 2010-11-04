// BEGIN CUT HERE

// END CUT HERE
#line 5 "EratosthenSieve2.cpp"
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

class EratosthenSieve2 {
public:
	int nthElement(int n) {
	int N[101];

	for(int i=0;i<101;i++)	N[i]=0;

	int cnt[10];
	for(int i=0;i<10;i++)	cnt[i]=0;
	
	int p=0;
	for(int i=1;i<=1000;i++){
		
		if(i%2!=0){
			cnt[2]++;
			if(cnt[2]%3!=0){
				cnt[3]++;
				if(cnt[3]%4!=0){
					cnt[4]++;
					if(cnt[4]%5!=0){
						cnt[5]++;
						if(cnt[5]%6!=0){
							cnt[6]++;
							if(cnt[6]%7!=0){
								cnt[7]++;
								if(cnt[7]%8!=0){
									cnt[8]++;
									if(cnt[8]%9!=0){
										cnt[9]++;
										if(cnt[9]%10!=0){
											N[p]=i;
											p++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	return N[n-1];
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 7; verify_case(0, Arg1, nthElement(Arg0)); }
	void test_case_1() { int Arg0 = 1; int Arg1 = 1; verify_case(1, Arg1, nthElement(Arg0)); }
	void test_case_2() { int Arg0 = 10; int Arg1 = 79; verify_case(2, Arg1, nthElement(Arg0)); }
	void test_case_3() { int Arg0 = 25; int Arg1 = 223; verify_case(3, Arg1, nthElement(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	EratosthenSieve2 ___test;
	___test.run_test(-1);
}
// END CUT HERE
