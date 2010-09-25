// BEGIN CUT HERE

// END CUT HERE
#line 5 "BuyingCheap.cpp"
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

class BuyingCheap {
public:
	int thirdBestPrice(vector <int> prices) {
#if 1
	set<int> rank;
	int ret=0;

	forv(i,prices){
		rank.insert(prices[i]);
	}

	if((int)rank.size()<3){
		return -1;
	}else{
		set <int>::iterator it =rank.begin();
		it++;
		it++;
		ret = *it;
		return ret;
	}
#else
	//do uniq vector.
	sort(all(prices));
	prices.erase(unique(all(prices)),prices.end());

	if(prices.size()<3)	return -1;

	return prices[2];
#endif
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {10, 40, 50, 20, 70,
 80, 30, 90, 60}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 30; verify_case(0, Arg1, thirdBestPrice(Arg0)); }
	void test_case_1() { int Arr0[] = {10, 10, 10, 10, 20,
 20, 30, 30, 40, 40}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 30; verify_case(1, Arg1, thirdBestPrice(Arg0)); }
	void test_case_2() { int Arr0[] = {10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(2, Arg1, thirdBestPrice(Arg0)); }
	void test_case_3() { int Arr0[] = {80, 90, 80, 90, 80}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(3, Arg1, thirdBestPrice(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	BuyingCheap ___test;
	___test.run_test(-1);
}
// END CUT HERE
