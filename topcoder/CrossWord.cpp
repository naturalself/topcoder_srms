// BEGIN CUT HERE

// END CUT HERE
#line 5 "CrossWord.cpp"
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

class CrossWord {
public:
	int countWords(vector <string> board, int size) {

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
	
	int verify_case(int casenum, const int &expected, const int &received, clock_t elapsed) { 
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
			string board[]            = {"X....X",
 "X.XX.X",
 "...X..",
 "X.XX.X",
 "..X..."};
			int size                  = 3;
			int expected__            = 2;

			clock_t start__           = clock();
			int received__            = CrossWord().countWords(vector <string>(board, board + (sizeof board / sizeof board[0])), size);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			string board[]            = {"...X...",
 ".X...X.",
 "..X.X..",
 "X..X..X",
 "..X.X..",
 ".X...X.",
 "...X..."};
			int size                  = 3;
			int expected__            = 6;

			clock_t start__           = clock();
			int received__            = CrossWord().countWords(vector <string>(board, board + (sizeof board / sizeof board[0])), size);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			string board[]            = {".....X....X....",
 ".....X....X....",
 "..........X....",
 "....X....X.....",
 "...X....X....XX",
 "XXX...X....X...",
 ".....X....X....",
 ".......X.......",
 "....X....X.....",
 "...X....X...XXX",
 "XX....X....X...",
 ".....X....X....",
 "....X..........",
 "....X....X.....",
 "....X....X....."}
;
			int size                  = 5;
			int expected__            = 8;

			clock_t start__           = clock();
			int received__            = CrossWord().countWords(vector <string>(board, board + (sizeof board / sizeof board[0])), size);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			string board[]            = {"...",
 "...",
 "..."};
			int size                  = 50;
			int expected__            = 0;

			clock_t start__           = clock();
			int received__            = CrossWord().countWords(vector <string>(board, board + (sizeof board / sizeof board[0])), size);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 4: {
			string board[]            = {"....",
 "....",
 "...."};
			int size                  = 3;
			int expected__            = 0;

			clock_t start__           = clock();
			int received__            = CrossWord().countWords(vector <string>(board, board + (sizeof board / sizeof board[0])), size);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string board[]            = ;
			int size                  = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = CrossWord().countWords(vector <string>(board, board + (sizeof board / sizeof board[0])), size);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string board[]            = ;
			int size                  = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = CrossWord().countWords(vector <string>(board, board + (sizeof board / sizeof board[0])), size);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string board[]            = ;
			int size                  = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = CrossWord().countWords(vector <string>(board, board + (sizeof board / sizeof board[0])), size);
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
