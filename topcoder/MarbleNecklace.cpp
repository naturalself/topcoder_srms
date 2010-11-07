// BEGIN CUT HERE

// END CUT HERE
#line 5 "MarbleNecklace.cpp"
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

class MarbleNecklace {
public:
	string normalize(string necklace) {
	string ret;
	vector<string> strs;
	
	string next=necklace;
	do{
		strs.pb(next);
		string tmp = next.substr(1);
		next = tmp + next[0];
	}while(next != necklace);
	
	reverse(all(necklace));

	string rev_gen = necklace;
	string rev = necklace;
	do{
		strs.pb(rev);
		string tmp = rev.substr(1);
		rev = tmp + rev[0];
	}while(rev != rev_gen);	
	
	sort(all(strs));
	ret = strs[0];

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
	
	int verify_case(int casenum, const string &expected, const string &received, clock_t elapsed) { 
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
			cerr << "    Expected: \"" << expected << "\"" << endl; 
			cerr << "    Received: \"" << received << "\"" << endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum) {
		switch (casenum) {
		case 0: {
			string necklace           = "CDAB";
			string expected__         = "ABCD";

			clock_t start__           = clock();
			string received__         = MarbleNecklace().normalize(necklace);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			string necklace           = "RGB";
			string expected__         = "BGR";

			clock_t start__           = clock();
			string received__         = MarbleNecklace().normalize(necklace);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			string necklace           = "TOPCODER";
			string expected__         = "CODERTOP";

			clock_t start__           = clock();
			string received__         = MarbleNecklace().normalize(necklace);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			string necklace           = "SONBZELGFEQMSULZCNPJODOWPEWLHJFOEW";
			string expected__         = "BNOSWEOFJHLWEPWODOJPNCZLUSMQEFGLEZ";

			clock_t start__           = clock();
			string received__         = MarbleNecklace().normalize(necklace);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 4: {
			string necklace           = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = MarbleNecklace().normalize(necklace);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 5: {
			string necklace           = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = MarbleNecklace().normalize(necklace);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string necklace           = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = MarbleNecklace().normalize(necklace);
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
