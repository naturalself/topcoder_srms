// BEGIN CUT HERE

// END CUT HERE
#line 5 "DerivativeSequence.cpp"
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

class DerivativeSequence {
public:
	vector <int> derSeq(vector <int> a, int n) {
	vector <int> t=a;
	vector <int> ret;

	if(n==0) return a;

	for(int i=0;i<n;i++){
		ret.clear();
		for(int j=0;j<(int)t.size()-1;j++){
			ret.pb(t[j+1]-t[j]);
		}
		t = ret;
	}

	return ret;
	}
};

// BEGIN CUT HERE
namespace moj_harness {
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				cerr << "Illegal input! Test case " << casenum << " does not exist." << endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			cerr << "No test cases run." << endl;
		} else if (correct < total) {
			cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << endl;
		} else {
			cerr << "All " << total << " tests passed!" << endl;
		}
	}
	
	template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << "{"; for (typename vector<T>::const_iterator vi=v.begin(); vi!=v.end(); ++vi) { if (vi != v.begin()) os << ","; os << " " << *vi; } os << " }"; return os; }

	int verify_case(int casenum, const vector <int> &expected, const vector <int> &received, clock_t elapsed) { 
		cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		cerr << verdict;
		if (!info.empty()) {
			cerr << " (";
			for (int i=0; i<(int)info.size(); ++i) {
				if (i > 0) cerr << ", ";
				cerr << info[i];
			}
			cerr << ")";
		}
		cerr << endl;
		
		if (verdict == "FAILED") {
			cerr << "    Expected: " << expected << endl; 
			cerr << "    Received: " << received << endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum) {
		switch (casenum) {
		case 0: {
			int a[]                   = {5,6,3,9,-1};
			int n                     = 1;
			int expected__[]          = {1, -3, 6, -10 };

			clock_t start__           = clock();
			vector <int> received__   = DerivativeSequence().derSeq(vector <int>(a, a + (sizeof a / sizeof a[0])), n);
			return verify_case(casenum, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 1: {
			int a[]                   = {5,6,3,9,-1};
			int n                     = 2;
			int expected__[]          = {-4, 9, -16 };

			clock_t start__           = clock();
			vector <int> received__   = DerivativeSequence().derSeq(vector <int>(a, a + (sizeof a / sizeof a[0])), n);
			return verify_case(casenum, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 2: {
			int a[]                   = {5,6,3,9,-1};
			int n                     = 4;
			int expected__[]          = {-38 };

			clock_t start__           = clock();
			vector <int> received__   = DerivativeSequence().derSeq(vector <int>(a, a + (sizeof a / sizeof a[0])), n);
			return verify_case(casenum, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 3: {
			int a[]                   = {4,4,4,4,4,4,4,4};
			int n                     = 3;
			int expected__[]          = {0, 0, 0, 0, 0 };

			clock_t start__           = clock();
			vector <int> received__   = DerivativeSequence().derSeq(vector <int>(a, a + (sizeof a / sizeof a[0])), n);
			return verify_case(casenum, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 4: {
			int a[]                   = {-100,100};
			int n                     = 0;
			int expected__[]          = {-100, 100 };

			clock_t start__           = clock();
			vector <int> received__   = DerivativeSequence().derSeq(vector <int>(a, a + (sizeof a / sizeof a[0])), n);
			return verify_case(casenum, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int a[]                   = ;
			int n                     = ;
			int expected__[]          = ;

			clock_t start__           = clock();
			vector <int> received__   = DerivativeSequence().derSeq(vector <int>(a, a + (sizeof a / sizeof a[0])), n);
			return verify_case(casenum, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 6: {
			int a[]                   = ;
			int n                     = ;
			int expected__[]          = ;

			clock_t start__           = clock();
			vector <int> received__   = DerivativeSequence().derSeq(vector <int>(a, a + (sizeof a / sizeof a[0])), n);
			return verify_case(casenum, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 7: {
			int a[]                   = ;
			int n                     = ;
			int expected__[]          = ;

			clock_t start__           = clock();
			vector <int> received__   = DerivativeSequence().derSeq(vector <int>(a, a + (sizeof a / sizeof a[0])), n);
			return verify_case(casenum, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}
 

int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(atoi(argv[i]));
	}
}
// END CUT HERE
