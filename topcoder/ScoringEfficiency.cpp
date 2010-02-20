// BEGIN CUT HERE

// END CUT HERE
#line 5 "ScoringEfficiency.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class ScoringEfficiency {
public:
	double getPointsPerShot(vector <string> gameLog) {

	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"Made 3 point field goal",
 "Missed 2 point field goal"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 1.5; verify_case(0, Arg1, getPointsPerShot(Arg0)); }
	void test_case_1() { string Arr0[] = {"Made free throw",
 "Missed free throw",
 "Missed free throw",
 "Missed free throw",
 "Made free throw"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 0.8; verify_case(1, Arg1, getPointsPerShot(Arg0)); }
	void test_case_2() { string Arr0[] = {"Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", 
 "Made 2 point field goal", "Missed 2 point field goal",
 "Made 3 point field goal", "Made 3 point field goal", "Made 3 point field goal",
 "Missed 3 point field goal", "Missed 3 point field goal", 
 "Missed 3 point field goal", "Missed 3 point field goal",
 "Made free throw", "Made free throw", "Made free throw", 
 "Made free throw", "Made free throw", "Made free throw", 
 "Made free throw", "Missed free throw", "Missed free throw"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 1.4545454545454546; verify_case(2, Arg1, getPointsPerShot(Arg0)); }
	void test_case_3() { string Arr0[] = {"Made 2 point field goal", "Missed free throw",
 "Made free throw", "Missed free throw", "Made free throw", 
 "Made 2 point field goal", "Made 2 point field goal",
 "Missed 2 point field goal", "Missed 2 point field goal",
 "Made 3 point field goal", "Missed 2 point field goal",
 "Made 2 point field goal", "Missed 2 point field goal",
 "Made 3 point field goal", "Missed 2 point field goal",
 "Missed 2 point field goal", "Missed 3 point field goal",
 "Made free throw", "Made free throw", 
 "Missed 3 point field goal", "Missed 2 point field goal",
 "Missed 2 point field goal", "Made 2 point field goal",
 "Missed 2 point field goal", "Made 2 point field goal",
 "Missed 3 point field goal"}
 ; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 0.9565217391304348; verify_case(3, Arg1, getPointsPerShot(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	ScoringEfficiency ___test;
	___test.run_test(-1);
}
// END CUT HERE
