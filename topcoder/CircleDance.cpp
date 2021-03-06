// BEGIN CUT HERE

// END CUT HERE
#line 5 "CircleDance.cpp"
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

class CircleDance {
public:
	int arrangeDancers(vector <int> heights) {
	int ret=0;
	vector <int> vi=heights;
	int n = (int)vi.size();
	int mid=0;
	sort(all(vi));

	forv(i,vi){
		cout << vi[i] << endl;
	}

	printf("n=%d\n",n);

	mid = (int)n/2;
	printf("mid=%d\n",mid);

	if(n==3){
		return vi[2]-vi[0];
	}

	if(n%2==0){
		ret = min( (vi[n-1]-vi[mid-1]) , (vi[mid]-vi[0]) );
	}else{
		ret = vi[n-1]-vi[mid+1];
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {180,183,178,185}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(0, Arg1, arrangeDancers(Arg0)); }
	void test_case_1() { int Arr0[] = {170,180,190}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 20; verify_case(1, Arg1, arrangeDancers(Arg0)); }
	void test_case_2() { int Arr0[] = {180,180,180,180,180}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(2, Arg1, arrangeDancers(Arg0)); }
	void test_case_3() { int Arr0[] = {184,165,175,186,192,200,176,192,194,168,205,201}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10; verify_case(3, Arg1, arrangeDancers(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	CircleDance ___test;
	___test.run_test(-1);
}
// END CUT HERE
