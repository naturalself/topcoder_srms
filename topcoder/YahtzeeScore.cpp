// BEGIN CUT HERE

// END CUT HERE
#line 5 "YahtzeeScore.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include<string.h>

using namespace std;

class YahtzeeScore {
public:
	int maxPoints(vector <int> toss) {

	int cur_score = 0;
	int max_score = 0;
	
	sort(toss.begin(),toss.end());

	for(int i=0;i<(int)toss.size();i++){
		cur_score = toss[i];
		for(int j=i+1;j<(int)toss.size();j++){
			if(toss[i] == toss[j]){
				i++;
				cur_score += toss[j];
			}else{
				break;
			}
		}
		if(max_score < cur_score)	max_score = cur_score;
		cur_score = 0;
	}
	return max_score;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = { 2, 2, 3, 5, 4 }; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(0, Arg1, maxPoints(Arg0)); }
	void test_case_1() { int Arr0[] = { 6, 4, 1, 1, 3 }; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; verify_case(1, Arg1, maxPoints(Arg0)); }
	void test_case_2() { int Arr0[] = { 5, 3, 5, 3, 3 }; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10; verify_case(2, Arg1, maxPoints(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	YahtzeeScore ___test;
	___test.run_test(-1);
}
// END CUT HERE
