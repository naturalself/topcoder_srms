// BEGIN CUT HERE

// END CUT HERE
#line 5 "CuttingPoles.cpp"
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

class CuttingPoles {
public:
	int countCuts(vector <int> poles) {
	vector<int>	pole=poles;
	int n = (int)poles.size();
	int ret=0;

	sort(pole.rbegin(),pole.rend());

	int avg= accumulate(all(pole),0)/n;	

	while(!Isend(pole)){
		sort(pole.rbegin(),pole.rend());
		pole[n-1] += pole[0]-avg;
		pole[0]=avg;
		ret++;
	}

	return ret;
	}
private:	
	bool Isend(vector<int> p){
	
	for(int i=0;i<(int)p.size()-1;i++){
		if(p[i]!=p[i+1]){
			return false;
		}
	}
	return true;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1,3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, countCuts(Arg0)); }
	void test_case_1() { int Arr0[] = {10,10,10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(1, Arg1, countCuts(Arg0)); }
	void test_case_2() { int Arr0[] = {1,1,3,3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, countCuts(Arg0)); }
	void test_case_3() { int Arr0[] = {10,10,10,10,10,10,10,18}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; verify_case(3, Arg1, countCuts(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	CuttingPoles ___test;
	___test.run_test(-1);
}
// END CUT HERE
