// BEGIN CUT HERE

// END CUT HERE
#line 5 "ClassScores.cpp"
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

class ClassScores {
public:
	vector <int> findMode(vector <int> scores) {
	vector <int> sc=scores;
	int n = (int)sc.size();
	vector <int> ex(n);
	vector <int> ret;
	set <int> mode;
	int cnt=0;
	int max_modes=0;
	//memset(exist,0,n);
	for(int i=0;i<n;i++){
		ex[i]=0;
	}

	sort(all(sc));

	forv(i,sc){
		cnt=0;
		forv(j,sc){
			if(sc[i]==sc[j]){
				cnt++;
			}
		}
		ex[cnt]=1;
	}
	
	for(int i=n-1;i>-1;i--){
		if(ex[i]==1){
			max_modes=i;
			break;
		}
	}
	//debug(max_modes);
	
	if(max_modes==0 || max_modes==1){
		ret = sc;
		return ret;
	}

	forv(i,sc){
		cnt=0;
		forv(j,sc){
			if(sc[i]==sc[j]){
				cnt++;
			}
		}
		if(cnt==max_modes){
			mode.insert(sc[i]);
		}
	}

	if(mode.empty()){

	}else{
		set<int>::iterator it = mode.begin();
		while( it != mode.end() ){
			ret.pb(*it);
			++it;
		}
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arr0[] = {65, 70, 88, 70}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {70 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, findMode(Arg0)); }
	void test_case_1() { int Arr0[] = {88, 70, 65, 70, 88}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {70, 88 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, findMode(Arg0)); }
	void test_case_2() { int Arr0[] = {92, 56, 14, 73, 22, 38, 93, 45, 55}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {14, 22, 38, 45, 55, 56, 73, 92, 93 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, findMode(Arg0)); }
	void test_case_3() { int Arr0[] = {5, 45, 4, 92, 32, 26, 40, 79, 18, 51, 40, 78, 41, 40, 26, 84, 54, 38, 45, 12, 33, 23, 44, 81, 67, 39, 72, 93, 67, 53, 9, 67, 11, 39, 15, 79, 7, 85, 9, 31, 77, 25, 67, 48}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {67}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, findMode(Arg0)); }
	void test_case_4() { int Arr0[] = {0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, findMode(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	ClassScores ___test;
	___test.run_test(-1);
}
// END CUT HERE
