// BEGIN CUT HERE

// END CUT HERE
#line 5 "MovieSeating.cpp"
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

class MovieSeating {
public:
	long long getSeatings(int numf, vector <string> hall) {
	long long ret=0;
	int n = (int)hall[0].size();

	//find row.
	forv(i,hall){
		int rownum=0;
		fors(j,hall[i]){
			if(hall[i][j]=='.'){
				rownum++;
			}			
		}
		if(rownum >= numf){
			ret += m_P_n(rownum,numf);
		}
	}
	if(numf > 1){
		//find col.
		for(int i=0;i<n;i++){
			int colnum=0;
			forv(j,hall){
				if(hall[j][i]=='.'){
					colnum++;
				}			
			}
			if(colnum >= numf){
				ret += m_P_n(colnum,numf);
			}
		}
	}

	return ret;
	}
private:
	long long m_P_n(int m,int n){
	long long r=1;
	int i=m;
	
	while(n!=0){
		r *= i;
		n--;
		i--;
	}

	return r;
	}

	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; string Arr1[] = { ".#..",
  ".##.",
  "...." }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 34LL; verify_case(0, Arg2, getSeatings(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 2; string Arr1[] = { "..#",
  ".##",
  "..." }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 16LL; verify_case(1, Arg2, getSeatings(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 5; string Arr1[] = { "..####..", 
  ".###.##.",
  ".######.",
  "#.#.#.#." }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 0LL; verify_case(2, Arg2, getSeatings(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 8; string Arr1[] = { "........" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 40320LL; verify_case(3, Arg2, getSeatings(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	MovieSeating ___test;
	___test.run_test(-1);
}
// END CUT HERE
