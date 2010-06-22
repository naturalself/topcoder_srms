// BEGIN CUT HERE

// END CUT HERE
#line 5 "PrimeContainers.cpp"
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

class PrimeContainers {
public:
	int containerSize(int N) {

	int ret = 0;
	int k=0;
	set <int> nums;

	for(int i=0;i<N;i++){
		k = (int)pow(2.0,i);
		nums.insert(N/k);
	}

	set<int>::iterator it = nums.begin();
	while( it != nums.end() ){
		if(IsPrime(*it)){
			ret++;
		}
		++it;
	}

	return ret;
	}
private:
	int IsPrime(int n){
    int i=0;

    if(n < 2){
        return 0;
	}else if(n == 2){
        return 1;
	}
    if(n % 2 == 0){
        return 0;
	}

    for(i = 3; i * i <= n; i += 2){
		if(n % i == 0){
            return 0;
		}
	}
    return 1;
	}

	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 10; int Arg1 = 2; verify_case(0, Arg1, containerSize(Arg0)); }
	void test_case_1() { int Arg0 = 42; int Arg1 = 2; verify_case(1, Arg1, containerSize(Arg0)); }
	void test_case_2() { int Arg0 = 47; int Arg1 = 5; verify_case(2, Arg1, containerSize(Arg0)); }
	void test_case_3() { int Arg0 = 959; int Arg1 = 6; verify_case(3, Arg1, containerSize(Arg0)); }
	void test_case_4() { int Arg0 = 421337; int Arg1 = 2; verify_case(4, Arg1, containerSize(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	PrimeContainers ___test;
	___test.run_test(-1);
}
// END CUT HERE
