// BEGIN CUT HERE

// END CUT HERE
#line 5 "OnLineRank.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>

using namespace std;

class OnLineRank {
public:
	int calcRanks(int k, vector <int> scores) {
	int sum = 0;
	int tmp = 0;

	for(int i=0;i<(int)scores.size();i++){

		tmp = 0;
		for(int j=i-1;j>=max(0,i-k);j--){

			if(scores[j]>scores[i]) tmp++;
		}
		sum += tmp+1;
	}

	return sum;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arr1[] = {6,9,8,15,7,12}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 11; verify_case(0, Arg2, calcRanks(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 80; int Arr1[] = {3,3,3,3,3,3,3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 7; verify_case(1, Arg2, calcRanks(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 9; int Arr1[] = {1, 5, 100, 92, 5, 17, 45, 92, 30, 30, 1, 5, 100, 92, 5, 17, 45, 92, 30, 30, 1, 5, 100, 92, 5, 17, 45, 92, 30, 30, 1, 5, 100, 92, 5, 17, 45, 92, 30, 30, 1, 5, 100, 92, 5, 17, 45, 92, 30, 30}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 234; verify_case(2, Arg2, calcRanks(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	OnLineRank ___test;
	___test.run_test(-1);
}
// END CUT HERE
