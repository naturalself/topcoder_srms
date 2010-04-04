// BEGIN CUT HERE

// END CUT HERE
#line 5 "ThirtyOne.cpp"
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

class ThirtyOne {
public:
	int findWinner(vector <string> hands) {

	string c[3];
	int a=0;
	double max=0;
	int res=0;
	stringstream ss;
	vector <double> score(hands.size(),0.0);

	for(int i=0;i<(int)hands.size();i++){
		
		ss << hands[i];
		ss >> c[0] >> c[1] >> c[2];
	
		if(c[0] == "A" && c[1] =="A"){
			swap(c[0],c[2]);
		}

		//cout << i << "=" << c[0] << c[1] << c[2] << endl;
		
		if(c[0]==c[1] && c[0]==c[2]){
			score[i] = 30.5;
		}else{
			for(int j=0;j<3;j++){
				if(c[j]>="0" && c[j]<="9"){
					sscanf(c[j].c_str(),"%d",&a);
					score[i] += a;
				}else if(c[j] == "10" || c[j] == "J" || 
						 c[j] == "Q" || c[j] == "K"){
					score[i] += 10;
				}else if(c[j] == "A"){
					if(score[i]<=20){
						score[i] += 11;
					}else{
						score[i] += 1;
					}
				}
			}
		}
		//cout << "score=" << score[i] << endl;

		ss.str("");
		ss.clear(stringstream::goodbit);
	}
	
	forv(i,score){
		if(max < score[i]){
			max = score[i];
			res = i;
		}
	}

	
	return res;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"10 A A", "K 2 3"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(0, Arg1, findWinner(Arg0)); }
	void test_case_1() { string Arr0[] = {"2 3 4", "10 6 8", "A K 3"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(1, Arg1, findWinner(Arg0)); }
	void test_case_2() { string Arr0[] = {"J 5 2","2 7 5","10 J 2","J 6 2","J Q K"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(2, Arg1, findWinner(Arg0)); }
	void test_case_3() { string Arr0[] = {"Q K K", "10 J Q", "A 8 A", "2 2 2"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(3, Arg1, findWinner(Arg0)); }
	void test_case_4() { string Arr0[] = {"Q 6 6","7 8 3","3 7 2","K Q 6","Q 6 3","5 3 8","10 J Q","4 8 4","Q 2 5","8 A 8",
"9 10 10","2 K 5","10 4 5","Q 4 Q","3 J 2","7 4 4","3 9 7","A 4 4","Q 7 7","10 9 A",
"J 3 5","5 8 9","Q Q 7"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; verify_case(4, Arg1, findWinner(Arg0)); }
	void test_case_5() { string Arr0[] = {"6 9 Q", "2 A A", "K Q 7", "10 2 8", "10 8 10", "10 9 K", "Q 2 Q", "K 10 7", "A J 2", "J 2 2", "2 A 4", "Q A J", "8 7 9", "5 A 9", "5 10 8", "9 7 6", "7 4 6", "9 5 2", "Q 7 2", "4 5 A", "2 6 9", "K 6 A", "A 9 5", "Q 8 9", "A A J", "Q 5 6", "8 Q 7", "2 6 J", "K 10 8", "A Q 10", "7 6 5", "2 5 A", "3 10 8", "3 10 2", "3 K 10", "6 10 6", "Q 3 K", "5 Q 7", "8 9 5", "7 7 2", "8 Q J"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 11; verify_case(5, Arg1, findWinner(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	ThirtyOne ___test;
	___test.run_test(-1);
}
// END CUT HERE
