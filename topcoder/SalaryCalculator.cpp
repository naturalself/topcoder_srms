// BEGIN CUT HERE

// END CUT HERE
#line 5 "SalaryCalculator.cpp"
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

class SalaryCalculator {
public:
	double calcHours(int P1, int P2, int salary) {
	double ret=0;

	if(salary <= 200*P1){
		return (double)salary/P1;
	}else{
		double remain=(double)salary;
		remain -= 200.0*(double)P1;
		ret += remain/P2+200.0;
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
			int P1                    = 10;
			int P2                    = 15;
			int salary                = 1000;
			double expected__         = 100.0;

			clock_t start__           = clock();
			double received__         = SalaryCalculator().calcHours(P1, P2, salary);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			int P1                    = 10;
			int P2                    = 15;
			int salary                = 3000;
			double expected__         = 266.6666666666667;

			clock_t start__           = clock();
			double received__         = SalaryCalculator().calcHours(P1, P2, salary);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			int P1                    = 100;
			int P2                    = 1;
			int salary                = 1000000;
			double expected__         = 980200.0;

			clock_t start__           = clock();
			double received__         = SalaryCalculator().calcHours(P1, P2, salary);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			int P1                    = 17;
			int P2                    = 23;
			int salary                = 973546;
			double expected__         = 42380.260869565216;

			clock_t start__           = clock();
			double received__         = SalaryCalculator().calcHours(P1, P2, salary);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 4: {
			int P1                    = 82;
			int P2                    = 8;
			int salary                = 12140;
			double expected__         = 148.0487804878049;

			clock_t start__           = clock();
			double received__         = SalaryCalculator().calcHours(P1, P2, salary);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int P1                    = ;
			int P2                    = ;
			int salary                = ;
			double expected__         = ;

			clock_t start__           = clock();
			double received__         = SalaryCalculator().calcHours(P1, P2, salary);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int P1                    = ;
			int P2                    = ;
			int salary                = ;
			double expected__         = ;

			clock_t start__           = clock();
			double received__         = SalaryCalculator().calcHours(P1, P2, salary);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int P1                    = ;
			int P2                    = ;
			int salary                = ;
			double expected__         = ;

			clock_t start__           = clock();
			double received__         = SalaryCalculator().calcHours(P1, P2, salary);
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
