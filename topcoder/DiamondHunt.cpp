// BEGIN CUT HERE

// END CUT HERE
#line 5 "DiamondHunt.cpp"
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

class DiamondHunt {
public:
	int countDiamonds(string mine) {
//neal_wu's ans
#if 1
	int count=0;
	while(mine.find("<>")!=string::npos)
		mine.erase(mine.find("<>"),2),count++;
	return count;
#else
	int ret=0;
	int isFind=0;
	string tar = mine;

	do{
		isFind = Find(tar);
		if(isFind!=-1){
			string s1 = tar.substr(0,isFind);
			string s2 = tar.substr(isFind+2,(int)tar.size());
			tar = s1+s2;
			ret++;
		}
		
	}while(isFind!=-1);

	return ret;
#endif
	}
private:
	int Find(string m){
	int r=-1;

	for(int i=0;i<(int)m.size()-1;i++){
		if(m[i]=='<' && m[i+1]=='>') return i;
	}

	return r;
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
			string mine               = "><<><>>><";
			int expected__            = 3;

			clock_t start__           = clock();
			int received__            = DiamondHunt().countDiamonds(mine);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			string mine               = ">>>><<";
			int expected__            = 0;

			clock_t start__           = clock();
			int received__            = DiamondHunt().countDiamonds(mine);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			string mine               = "<<<<<<<<<>>>>>>>>>";
			int expected__            = 9;

			clock_t start__           = clock();
			int received__            = DiamondHunt().countDiamonds(mine);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			string mine               = "><<><><<>>>><<>><<><<>><<<>>>>>><<<";
			int expected__            = 14;

			clock_t start__           = clock();
			int received__            = DiamondHunt().countDiamonds(mine);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 4: {
			string mine               = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = DiamondHunt().countDiamonds(mine);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 5: {
			string mine               = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = DiamondHunt().countDiamonds(mine);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string mine               = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = DiamondHunt().countDiamonds(mine);
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
