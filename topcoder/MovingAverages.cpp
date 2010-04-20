// BEGIN CUT HERE

// END CUT HERE
#line 5 "MovingAverages.cpp"
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

class MovingAverages {
public:
	vector <int> calculate(vector <string> times, int n) {

	vector <int> int_time(times.size());
	vector <int> ret;
	int h=0;
	int m=0;
	int s=0;
	int time = 0;
	double avg = 0;
	
	forv(i,times){
		sscanf(times[i].c_str(),"%d:%d:%d",&h,&m,&s);

		time += h*3600;
		time += m*60;
		time += s;
		int_time[i] = time;
		time =0;
	}
	
	for(int i=0;i<(int)int_time.size()-n+1;i++){
		for(int j=0;j<n;j++){
			avg += int_time[i+j];
		}
		avg = avg/(double)n;
		ret.push_back((int)avg);
		avg = 0;
	}
	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arr0[] = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arr2[] = { 4731,  4695,  4684 }; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(0, Arg2, calculate(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; int Arr2[] = { 4750,  4660,  4784,  4643,  4627 }; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(1, Arg2, calculate(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; int Arr2[] = { 4692 }; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(2, Arg2, calculate(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	MovingAverages ___test;
	___test.run_test(-1);
}
// END CUT HERE
