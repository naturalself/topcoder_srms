// BEGIN CUT HERE

// END CUT HERE
#line 5 "PrefixCode.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class PrefixCode {
public:
	string isOne(vector <string> words) {
		
		stringstream ss;
		string isPrefix = "No";
		int count = 0;
		
		//One word
		if(words.size() == 1) return "Yes";
		
		//else
		for(int i=0;i < (int)words.size();i++){
			for(int k=0;k < (int)words.size();k++){
				
				if(i != k){
					for(int j=0;j< (int)words[i].size();j++){
						if(words[i][j] == words[k][j]){
							count++;
						}
						
						if(words[i].size() <= words[k].size() && count == (int)(words[i].size())){
							ss << isPrefix << ", " << i;
							return ss.str();
						}
					}
					
				}
				count =0;
			}
		}
		return "Yes";
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"trivial"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Yes"; verify_case(0, Arg1, isOne(Arg0)); }
	void test_case_1() { string Arr0[] = {"10001", "011", "100", "001", "10"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "No, 2"; verify_case(1, Arg1, isOne(Arg0)); }
	void test_case_2() { string Arr0[] = {"no", "nosy", "neighbors", "needed"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "No, 0"; verify_case(2, Arg1, isOne(Arg0)); }
	void test_case_3() { string Arr0[] = {"1010", "11", "100", "0", "1011"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Yes"; verify_case(3, Arg1, isOne(Arg0)); }
	void test_case_4() { string Arr0[] = {"No", "not"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Yes"; verify_case(4, Arg1, isOne(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	PrefixCode ___test;
	___test.run_test(-1);
}
// END CUT HERE
