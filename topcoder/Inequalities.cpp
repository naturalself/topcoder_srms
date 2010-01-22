// BEGIN CUT HERE

// END CUT HERE
#line 5 "Inequalities.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Inequalities {
public:
	int maximumSubset(vector <string> inequalities) {

	stringstream ss;

	int Ine_num = (int)inequalities.size();

	int integer = 0;

	string chara1="";

	string chara2="";

	int max_int = -1;

	for(int i =0;i<Ine_num;i++){

		ss << inequalities[i];
	
		ss >> chara1 >> chara2  >> integer;
		cout << chara2 << integer << endl;

		if(max_int < integer && (chara2 == "<="||"="||"<")) max_int = integer; 

		cout << max_int << endl;

		ss.str("");
		ss.clear(stringstream::goodbit);
	}

	
	
	return 0;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"X <= 12","X = 13","X > 9","X < 10","X >= 14"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(0, Arg1, maximumSubset(Arg0)); }
	void test_case_1() { string Arr0[] = {"X < 0","X <= 0"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(1, Arg1, maximumSubset(Arg0)); }
	void test_case_2() { string Arr0[] = {"X = 1","X = 2","X = 3","X > 0"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, maximumSubset(Arg0)); }
	void test_case_3() { string Arr0[] = {"X <= 521","X >= 521","X = 521","X > 902","X > 12","X <= 1000"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(3, Arg1, maximumSubset(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	Inequalities ___test;
	___test.run_test(-1);
}
// END CUT HERE
