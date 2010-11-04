// BEGIN CUT HERE

// END CUT HERE
#line 5 "MultiRead.cpp"
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

class MultiRead {
public:
	int minCycles(string tr, int pr) {
	int ret=0;

	vector<int> r;
	int r_cnt=0;
	bool st_w=false;
	fors(i,tr){
		if(tr[i] == 'R'){
			st_w=false;
			r_cnt++;
			if(i==(int)tr.size()-1) r.pb(r_cnt); 
		}else{
			if(st_w==false){
				r.pb(r_cnt);
				r_cnt = 0;
				st_w=true;
			}
			ret++;
		}
	}
	forv(i,r){
		if(r[i] >= pr){
			ret += (int)ceil((double)r[i]/(double)pr);
		}else{
			if(r[i]!=0){
				ret +=1;
			}
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
			string trace              = "RWWRRR";
			int procs                 = 3;
			int expected__            = 4;

			clock_t start__           = clock();
			int received__            = MultiRead().minCycles(trace, procs);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			string trace              = "RWWRRRR";
			int procs                 = 3;
			int expected__            = 5;

			clock_t start__           = clock();
			int received__            = MultiRead().minCycles(trace, procs);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			string trace              = "WWWWW";
			int procs                 = 5;
			int expected__            = 5;

			clock_t start__           = clock();
			int received__            = MultiRead().minCycles(trace, procs);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			string trace              = "RRRRRRRRRR";
			int procs                 = 4;
			int expected__            = 3;

			clock_t start__           = clock();
			int received__            = MultiRead().minCycles(trace, procs);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 4: {
			string trace              = "RWRRWWRWRWRRRWWRRRRWRRWRRWRRRRRRRRRWRWRWRRRRWRRRRR";
			int procs                 = 4;
			int expected__            = 30;

			clock_t start__           = clock();
			int received__            = MultiRead().minCycles(trace, procs);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string trace              = ;
			int procs                 = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = MultiRead().minCycles(trace, procs);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string trace              = ;
			int procs                 = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = MultiRead().minCycles(trace, procs);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string trace              = ;
			int procs                 = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = MultiRead().minCycles(trace, procs);
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
