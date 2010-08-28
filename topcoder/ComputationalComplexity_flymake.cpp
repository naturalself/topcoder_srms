// BEGIN CUT HERE

// END CUT HERE
#line 5 "ComputationalComplexity.cpp"
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

class ComputationalComplexity {
public:
	int fastestAlgo(vector <int> c, vector <int> p, vector <int> lP, int N) {
	int ret=0;
	long long op=0;
	int idx=0;
	long long min_op=1000000000;

	forv(i,c){
		op = c[i]*mypow(N,p[i]);
		cout << op << endl;

		op *= mypow((int)log(N),lP[i]);
		printf("log = %lld\n",mypow((int)log(N),lP[i]));
		printf("res = %lld\n",op);

		if(min_op > op){
			idx = i;
			min_op = op;
		}
	}
	ret = idx;

	return ret;
	}
private:
	long long mypow(int x,int y){
	int ret=x;
	
	for(int i=0;i<y-1;i++){
		ret *= x;
	}
	if(y ==0){
		return 1;
	}else{
		return ret;
	}
	}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {5, 50, 45}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 1, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0, 1, 1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 400; int Arg4 = 2; verify_case(0, Arg4, fastestAlgo(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arr0[] = {5, 50, 45}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 1, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0, 1, 1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 10; int Arg4 = 0; verify_case(1, Arg4, fastestAlgo(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arr0[] = {100}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {5}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {5}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 1000; int Arg4 = 0; verify_case(2, Arg4, fastestAlgo(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arr0[] = {32, 33, 58, 93, 8, 27, 43, 69, 95, 77,
 57, 73, 87, 87, 50, 92, 67, 20, 2, 46,
 73, 48, 25, 90, 48, 18, 28, 26, 20, 33,
 59, 48, 69, 4, 19, 13, 10, 78, 55, 90}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {5, 0, 1, 4, 0, 3, 5, 4, 3, 3,
 0, 5, 0, 5, 5, 3, 0, 4, 1, 1,
 4, 0, 2, 4, 0, 0, 3, 2, 0, 0,
 4, 3, 5, 0, 2, 4, 3, 4, 3, 0}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {2, 2, 2, 0, 4, 5, 2, 3, 4, 5,
 0, 0, 1, 4, 2, 5, 2, 4, 5, 0,
 5, 4, 3, 0, 4, 1, 1, 3, 3, 0,
 1, 5, 2, 1, 1, 4, 0, 0, 2, 3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 1000; int Arg4 = 33; verify_case(3, Arg4, fastestAlgo(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	ComputationalComplexity ___test;
	___test.run_test(-1);
}
// END CUT HERE
