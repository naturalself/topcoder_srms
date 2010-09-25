// BEGIN CUT HERE

// END CUT HERE
#line 5 "CustomerStatistics.cpp"
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

class CustomerStatistics {
public:
	vector <string> reportDuplicates(vector <string> name) {
	vector <string> ret;	
	int n=(int)name.size();

	sort(all(name));

	int cnt=1;
	for(int i=1;i<n;i++){
		if(name[i-1]==name[i]){
			cnt++;
			if(i==n-1 && cnt>=2){
				stringstream ss;
				ss << name[i-1] << ' ' << cnt;
				ret.push_back(ss.str());				
			}
		}else{
			if(cnt>=2){
				stringstream ss;
				ss << name[i-1] << ' ' << cnt;
				ret.push_back(ss.str());
			}
			cnt = 1;
		}
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arr0[] = {"JOHN", "BOB", "JOHN", "BILL", "STANLEY", "JOHN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"JOHN 3" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, reportDuplicates(Arg0)); }
	void test_case_1() { string Arr0[] = {"YETTI", "YETTI", "YETTI", "BIGFOOT", "BIGFOOT"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"BIGFOOT 2", "YETTI 3" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, reportDuplicates(Arg0)); }
	void test_case_2() { string Arr0[] = {"ANDREW", "BILL", "CINDY", "DOH", "ERGH", "FOO", "GOO", "HMPH"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, reportDuplicates(Arg0)); }
	void test_case_3() { string Arr0[] = {"THEONLYCUSTOMER"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, reportDuplicates(Arg0)); }
	void test_case_4() { string Arr0[] = {"A", "B", "A", "C", "A", "B", "A", "D", "D", "D"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"A 4", "B 2", "D 3" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, reportDuplicates(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	CustomerStatistics ___test;
	___test.run_test(-1);
}
// END CUT HERE
