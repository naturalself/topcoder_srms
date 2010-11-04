// BEGIN CUT HERE

// END CUT HERE
#line 5 "TxMsg.cpp"
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

class TxMsg {
public:
	string getMessage(string ori) {
	string ret;

	stringstream ss(ori);
	
	int space=1;
	fors(i,ori){
		if(ori[i]==' '){
			space++;
		}
	}

	while(space){
		string w;
		ss >> w;
		bool cons=false;
		fors(i,w){
			if(w[i]=='a' || w[i]=='i' || w[i]=='u' || 
			   w[i]=='e' || w[i]=='o'){
				
			}else{
				cons=true;
			}
		}
		
		if(cons){
			fors(i,w){
				if(w[i]=='a' || w[i]=='i' || w[i]=='u' || 
				   w[i]=='e' || w[i]=='o'){
					
				}else{
					if(i==0 || w[i-1]=='a' ||w[i-1]=='i' ||
					   w[i-1]=='u' ||w[i-1]=='e' ||w[i-1]=='o'){
						ret += w[i];
					}
				}
			}
		}else{
			ret += w;
		}

		
		ret += " ";
		space--;
	}
	int siz=(int)ret.size();
	ret = ret.substr(0,siz-1);

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
			string original           = "text message";
			string expected__         = "tx msg";

			clock_t start__           = clock();
			string received__         = TxMsg().getMessage(original);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			string original           = "ps i love u";
			string expected__         = "p i lv u";

			clock_t start__           = clock();
			string received__         = TxMsg().getMessage(original);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			string original           = "please please me";
			string expected__         = "ps ps m";

			clock_t start__           = clock();
			string received__         = TxMsg().getMessage(original);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			string original           = "back to the ussr";
			string expected__         = "bc t t s";

			clock_t start__           = clock();
			string received__         = TxMsg().getMessage(original);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 4: {
			string original           = "aeiou bcdfghjklmnpqrstvwxyz";
			string expected__         = "aeiou b";

			clock_t start__           = clock();
			string received__         = TxMsg().getMessage(original);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

      case 5: {
			string original           = "a";
			string expected__         = "a";

			clock_t start__           = clock();
			string received__         = TxMsg().getMessage(original);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
      case 6: {
			string original           = "b";
			string expected__         = "b";

			clock_t start__           = clock();
			string received__         = TxMsg().getMessage(original);
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
/*      case 7: {
			string original           = ;
			string expected__         = ;

			clock_t start__           = clock();
			string received__         = TxMsg().getMessage(original);
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
