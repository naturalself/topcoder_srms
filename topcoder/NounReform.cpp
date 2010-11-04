// BEGIN CUT HERE

// END CUT HERE
#line 5 "NounReform.cpp"
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

class NounReform {
public:
	vector <string> makePlural(vector <string> nouns) {
	vector <string> ret;

	forv(i,nouns){
		string tmp=nouns[i];
		
		int n = (int)tmp.size();
		if(tmp[n-1]=='s'|| tmp[n-1]=='z' || tmp[n-1]=='x'){
			tmp += "es";
		}else if(tmp[n-1]=='h' && (tmp[n-2]=='s'|| tmp[n-2]=='c')){
			tmp += "es";
		}else if(tmp[n-1]=='y'){
			if(tmp[n-2]=='a' || tmp[n-2]=='i'|| 
			   tmp[n-2]=='u'|| tmp[n-2]=='e'|| tmp[n-2]=='o'){
				tmp += "s";
			}else{
				tmp[n-1]='i';
				tmp += "es";
			}
		}else{
			tmp += "s";
		}
		ret.pb(tmp);
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
	template<> ostream& operator<<(ostream &os, const vector<string> &v) { os << "{"; for (vector<string>::const_iterator vi=v.begin(); vi!=v.end(); ++vi) { if (vi != v.begin()) os << ","; os << " \"" << *vi << "\""; } os << " }"; return os; }

	int verify_case(int casenum, const vector <string> &expected, const vector <string> &received, clock_t elapsed) { 
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
			string nouns[]            = {"box", "church", "elephant", "stereo"};
			string expected__[]       = {"boxes", "churches", "elephants", "stereos" };

			clock_t start__           = clock();
			vector <string> received__ = NounReform().makePlural(vector <string>(nouns, nouns + (sizeof nouns / sizeof nouns[0])));
			return verify_case(casenum, vector <string>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 1: {
			string nouns[]            = {"tray", "key", "enemy", "baby"};
			string expected__[]       = {"trays", "keys", "enemies", "babies" };

			clock_t start__           = clock();
			vector <string> received__ = NounReform().makePlural(vector <string>(nouns, nouns + (sizeof nouns / sizeof nouns[0])));
			return verify_case(casenum, vector <string>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 2: {
			string nouns[]            = {"a", "s", "oy", "y", "yy"};
			string expected__[]       = {"as", "ses", "oys", "ies", "yies" };

			clock_t start__           = clock();
			vector <string> received__ = NounReform().makePlural(vector <string>(nouns, nouns + (sizeof nouns / sizeof nouns[0])));
			return verify_case(casenum, vector <string>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}

		// custom cases

/*      case 3: {
			string nouns[]            = ;
			string expected__[]       = ;

			clock_t start__           = clock();
			vector <string> received__ = NounReform().makePlural(vector <string>(nouns, nouns + (sizeof nouns / sizeof nouns[0])));
			return verify_case(casenum, vector <string>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 4: {
			string nouns[]            = ;
			string expected__[]       = ;

			clock_t start__           = clock();
			vector <string> received__ = NounReform().makePlural(vector <string>(nouns, nouns + (sizeof nouns / sizeof nouns[0])));
			return verify_case(casenum, vector <string>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 5: {
			string nouns[]            = ;
			string expected__[]       = ;

			clock_t start__           = clock();
			vector <string> received__ = NounReform().makePlural(vector <string>(nouns, nouns + (sizeof nouns / sizeof nouns[0])));
			return verify_case(casenum, vector <string>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
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
