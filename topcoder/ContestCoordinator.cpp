// BEGIN CUT HERE

// END CUT HERE
#line 5 "ContestCoordinator.cpp"
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

class ContestCoordinator {
public:
	double bestAverage(vector <int> sc) {
	int n =(int)sc.size();
	double ret=0.0;
	
	sort(all(sc));

	for(int i=0;i<n;i++){
		vector<int> tar;
		for(int j=i;j<n-i;j++) tar.pb(sc[j]);

		double avg = (double)accumulate(all(tar),0)/(double)tar.size();
		ret = max(ret,avg);
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
	
	static const double MAX_DOUBLE_ERROR = 1e-9; static bool topcoder_fequ(double expected, double result) { if (isnan(expected)) { return isnan(result); } else if (isinf(expected)) { if (expected > 0) { return result > 0 && isinf(result); } else { return result < 0 && isinf(result); } } else if (isnan(result) || isinf(result)) { return false; } else if (fabs(result - expected) < MAX_DOUBLE_ERROR) { return true; } else { double mmin = min(expected * (1.0 - MAX_DOUBLE_ERROR), expected * (1.0 + MAX_DOUBLE_ERROR)); double mmax = max(expected * (1.0 - MAX_DOUBLE_ERROR), expected * (1.0 + MAX_DOUBLE_ERROR)); return result > mmin && result < mmax; } }
	double moj_relative_error(double expected, double result) { if (isnan(expected) || isinf(expected) || isnan(result) || isinf(result) || expected == 0) return 0; return fabs(result-expected) / fabs(expected); }
	
	int verify_case(int casenum, const double &expected, const double &received, clock_t elapsed) { 
		cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (topcoder_fequ(expected, received)) {
			verdict = "PASSED";
			double rerr = moj_relative_error(expected, received); 
			if (rerr > 0) {
				sprintf(buf, "relative error %.3e", rerr);
				info.push_back(buf);
			}
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
			int scores[]              = {1};
			double expected__         = 1.0;

			clock_t start__           = clock();
			double received__         = ContestCoordinator().bestAverage(vector <int>(scores, scores + (sizeof scores / sizeof scores[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			int scores[]              = {1,2,3,4};
			double expected__         = 2.5;

			clock_t start__           = clock();
			double received__         = ContestCoordinator().bestAverage(vector <int>(scores, scores + (sizeof scores / sizeof scores[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			int scores[]              = {1,1,999,999,1000,1000};
			double expected__         = 999.0;

			clock_t start__           = clock();
			double received__         = ContestCoordinator().bestAverage(vector <int>(scores, scores + (sizeof scores / sizeof scores[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			int scores[]              = {1,13,8,6,7,9};
			double expected__         = 7.5;

			clock_t start__           = clock();
			double received__         = ContestCoordinator().bestAverage(vector <int>(scores, scores + (sizeof scores / sizeof scores[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 4: {
			int scores[]              = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
			double expected__         = 1.0;

			clock_t start__           = clock();
			double received__         = ContestCoordinator().bestAverage(vector <int>(scores, scores + (sizeof scores / sizeof scores[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int scores[]              = ;
			double expected__         = ;

			clock_t start__           = clock();
			double received__         = ContestCoordinator().bestAverage(vector <int>(scores, scores + (sizeof scores / sizeof scores[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int scores[]              = ;
			double expected__         = ;

			clock_t start__           = clock();
			double received__         = ContestCoordinator().bestAverage(vector <int>(scores, scores + (sizeof scores / sizeof scores[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int scores[]              = ;
			double expected__         = ;

			clock_t start__           = clock();
			double received__         = ContestCoordinator().bestAverage(vector <int>(scores, scores + (sizeof scores / sizeof scores[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
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
