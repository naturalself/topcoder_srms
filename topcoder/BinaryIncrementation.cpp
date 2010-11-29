// BEGIN CUT HERE

// END CUT HERE
#line 5 "BinaryIncrementation.cpp"
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

class BinaryIncrementation {
public:
	string plusOne(string x) {
	string ret;
	int n=(int)x.size();

	if(x[n-1]=='0') return x.substr(0,n-1)+'1';

	unsigned long ul=0;
	unsigned long bit=0x00000001;
	for(int i=n-1;i>-1;i--){
		if(x[i]=='1'){
			ul += bit; 
		}
		bit = bit << 1;
	}
	ul++;

	for(unsigned long i=ul;i!=0;i = i>>1){
		if(i & 0x00000001){
			ret = '1'+ret;
		}else{
			ret = '0'+ret;
		}
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
			string x                  = "10011";
			string expected__         = "10100";

			clock_t start__           = clock();
			string received__         = BinaryIncrementation().plusOne(x);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			string x                  = "10000";
			string expected__         = "10001";

			clock_t start__           = clock();
			string received__         = BinaryIncrementation().plusOne(x);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			string x                  = "1111";
			string expected__         = "10000";

			clock_t start__           = clock();
			string received__         = BinaryIncrementation().plusOne(x);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			string x                  = "1";
			string expected__         = "10";

			clock_t start__           = clock();
			string received__         = BinaryIncrementation().plusOne(x);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 4: {
			string x                  = "101010101010101010101010101010";
			string expected__         = "101010101010101010101010101011";

			clock_t start__           = clock();
			string received__         = BinaryIncrementation().plusOne(x);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string x                  = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = BinaryIncrementation().plusOne(x);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string x                  = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = BinaryIncrementation().plusOne(x);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string x                  = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = BinaryIncrementation().plusOne(x);
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
