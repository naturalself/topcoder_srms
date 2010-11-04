// BEGIN CUT HERE

// END CUT HERE
#line 5 "HuffmanDecoding.cpp"
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

class HuffmanDecoding {
public:
	string decode(string arc, vector <string> dic) {
	int n = (int)dic.size();
	string ret;
	int st[n];
	for(int i=0;i<n;i++){
		char tmp = 'A'+i;
		st[i]=tmp;
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
			string archive            = "101101";
			string dictionary[]       = {"00","10","01","11"};
			string expected__         = "BDC";

			clock_t start__           = clock();
			string received__         = HuffmanDecoding().decode(archive, vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			string archive            = "10111010";
			string dictionary[]       = {"0","111","10"};
			string expected__         = "CBAC";

			clock_t start__           = clock();
			string received__         = HuffmanDecoding().decode(archive, vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			string archive            = "0001001100100111001";
			string dictionary[]       = {"1","0"};
			string expected__         = "BBBABBAABBABBAAABBA";

			clock_t start__           = clock();
			string received__         = HuffmanDecoding().decode(archive, vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			string archive            = "111011011000100110";
			string dictionary[]       = {"010","00","0110","0111","11","100","101"};
			string expected__         = "EGGFAC";

			clock_t start__           = clock();
			string received__         = HuffmanDecoding().decode(archive, vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 4: {
			string archive            = "001101100101100110111101011001011001010";
			string dictionary[]       = {"110","011","10","0011","00011","111","00010","0010","010","0000"};
			string expected__         = "DBHABBACAIAIC";

			clock_t start__           = clock();
			string received__         = HuffmanDecoding().decode(archive, vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string archive            = ;
			string dictionary[]       = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = HuffmanDecoding().decode(archive, vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string archive            = ;
			string dictionary[]       = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = HuffmanDecoding().decode(archive, vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string archive            = ;
			string dictionary[]       = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = HuffmanDecoding().decode(archive, vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])));
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
