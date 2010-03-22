// BEGIN CUT HERE

// END CUT HERE
#line 5 "CrossWord.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class CrossWord {
public:
	int countWords(vector <string> board, int size) {

	int count = 0;
	int res = 0;

	//cout << dots << endl;

	for(int i=0;i<(int)board.size();i++){
		
		count = 0;
		for(int j=0;j<(int)board[i].size();j++){
			if(board[i][j]=='.'){
				//cout << "." << endl;
				count++;
			}else{
				if(count==size) res++;
				count = 0;
			}  
		}
		if(count==size) res++;
	}

	return res;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"X....X",
 "X.XX.X",
 "...X..",
 "X.XX.X",
 "..X..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arg2 = 2; verify_case(0, Arg2, countWords(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"...X...",
 ".X...X.",
 "..X.X..",
 "X..X..X",
 "..X.X..",
 ".X...X.",
 "...X..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arg2 = 6; verify_case(1, Arg2, countWords(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {".....X....X....",
 ".....X....X....",
 "..........X....",
 "....X....X.....",
 "...X....X....XX",
 "XXX...X....X...",
 ".....X....X....",
 ".......X.......",
 "....X....X.....",
 "...X....X...XXX",
 "XX....X....X...",
 ".....X....X....",
 "....X..........",
 "....X....X.....",
 "....X....X....."}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; int Arg2 = 8; verify_case(2, Arg2, countWords(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"...",
 "...",
 "..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 50; int Arg2 = 0; verify_case(3, Arg2, countWords(Arg0, Arg1)); }
	void test_case_4() { string Arr0[] = {"....",
 "....",
 "...."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arg2 = 0; verify_case(4, Arg2, countWords(Arg0, Arg1)); }
	void test_case_5() { string Arr0[] = {"................................................",
 ".X...X..........................................",
 "....................X..........................."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 27; int Arg2 = 1; verify_case(5, Arg2, countWords(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	CrossWord ___test;
	___test.run_test(-1);
}
// END CUT HERE
