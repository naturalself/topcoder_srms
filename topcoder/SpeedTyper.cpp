// BEGIN CUT HERE

// END CUT HERE
#line 5 "SpeedTyper.cpp"
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

class SpeedTyper {
public:
	string lettersToPractice(string let, vector <int> times) {
	string ret;
	int n = (int)times.size();
	int t[n];
	int sum = 0;

	t[0] = times[0];
	sum += t[0];
	for(int i=1;i<n;i++){
		t[i] = times[i]-times[i-1];
		sum += t[i];
	}

	int avg = sum/n;
	
	for(int i=0;i<n;i++){
		if(avg < t[i]){
			ret += let[i];
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
	void test_case_0() { string Arg0 = "dcab"; int Arr1[] = {250, 300, 400, 800}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "db"; verify_case(0, Arg2, lettersToPractice(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "keyboard"; int Arr1[] = {100,200,300,500,600,800,900,1200}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "bad"; verify_case(1, Arg2, lettersToPractice(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "rewq"; int Arr1[] = {500, 1000, 1500, 4000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "q"; verify_case(2, Arg2, lettersToPractice(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "abc"; int Arr1[] = {2000, 4000, 6000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = ""; verify_case(3, Arg2, lettersToPractice(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	SpeedTyper ___test;
	___test.run_test(-1);
}
// END CUT HERE
