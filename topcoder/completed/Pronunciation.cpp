// BEGIN CUT HERE

// END CUT HERE
#line 5 "Pronunciation.cpp"
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

class Pronunciation {
public:
	string canPronounce(vector <string> words) {
	string ret = "";

	forv(i,words){
		for(int j=0;j<(int)words[i].size()-1;j++){
			if(j<(int)words[i].size()-2){
				if(!isVoel(words[i][j]) && 
				   !isVoel(words[i][j+1]) &&
				   !isVoel(words[i][j+2])){
					return words[i];
				}
			}
			if(isVoel(words[i][j]) && isVoel(words[i][j+1]) && 
			   toupper(words[i][j])!= toupper(words[i][j+1])){
				return words[i];
			}
		}
	}

	return ret;
	}
private:
	bool isVoel(char c){
	
	char voel[5]={'A','I','U','E','O',};
		
	for(int i=0;i<5;i++){
		if(toupper((int)c) == voel[i]){
			return true;
		}
	}
	
	return false;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"All","of","these","are","not","difficult"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = ""; verify_case(0, Arg1, canPronounce(Arg0)); }
	void test_case_1() { string Arr0[] = {"The","word","REALLY","is","really","hard"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "REALLY"; verify_case(1, Arg1, canPronounce(Arg0)); }
	void test_case_2() { string Arr0[] = {"TRiCKy"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "TRiCKy"; verify_case(2, Arg1, canPronounce(Arg0)); }
	void test_case_3() { string Arr0[] = {"irresistable","prerogative","uttermost","importance"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = ""; verify_case(3, Arg1, canPronounce(Arg0)); }
	void test_case_4() { string Arr0[] = {"Aa"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = ""; verify_case(4, Arg1, canPronounce(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	Pronunciation ___test;
	___test.run_test(-1);
}
// END CUT HERE
