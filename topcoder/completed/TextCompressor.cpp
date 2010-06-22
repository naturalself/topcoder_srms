// BEGIN CUT HERE

// END CUT HERE
#line 5 "TextCompressor.cpp"
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

#define forv(i, v) for (int i = 0; i < (int)(v.size()); ++i)
#define fors(i, s) for (int i = 0; i < (int)(s.length()); ++i)
#define all(a) a.begin(), a.end() 

class TextCompressor {
public:
	string longestRepeat(string text) {
	
	int n = (int)text.size();
	string ret = "";
	string search;
	int pos=-1;
	string tmp;

	for(int i=0;i<n;i++){
		for(int j=n-i;j>0;j--){
			search = text.substr(i,j);
			pos = text.find(search);
			if(pos!= -1){
				tmp = text.substr(pos+j);
				pos = tmp.find(search);
				if(pos!= -1 && (search.size() > ret.size())){
					ret = search;
				}
			}
		}
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "ABCDABCFG"; string Arg1 = "ABC"; verify_case(0, Arg1, longestRepeat(Arg0)); }
	void test_case_1() { string Arg0 = "ABABA"; string Arg1 = "AB"; verify_case(1, Arg1, longestRepeat(Arg0)); }
	void test_case_2() { string Arg0 = "This is a test."; string Arg1 = "is "; verify_case(2, Arg1, longestRepeat(Arg0)); }
	void test_case_3() { string Arg0 = "Testing testing 1 2 3."; string Arg1 = "esting "; verify_case(3, Arg1, longestRepeat(Arg0)); }
	void test_case_4() { string Arg0 = "The quick brown fox jumps over the lazy dog."; string Arg1 = "he "; verify_case(4, Arg1, longestRepeat(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	TextCompressor ___test;
	___test.run_test(-1);
}
// END CUT HERE
