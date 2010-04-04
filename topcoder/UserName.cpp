// BEGIN CUT HERE

// END CUT HERE
#line 5 "UserName.cpp"
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

class UserName {
public:
	string newMember(vector <string> existingNames, string newName) {

	vector <string> nears;
	stringstream ss;
	string name;
	int num=0;
	int care=0;

	sort(all(existingNames));

	forv(i,existingNames){
		if(newName==existingNames[i].substr(0,newName.size())){

			cout << existingNames[i] << endl;

			num = IsNumber(existingNames[i]);
			cout << num << endl;
			care++;
		}
	}

	if(care==0)	return newName;

	return "";
	}
private:
	int IsNumber(string str){
	
	int digit=1;
	int n=0;
		
	for(int j=(int)str.size()-1;j>=0;j--){
		if(str[j]>='0' && str[j]<='9'){

			n += (str[j]-48)*digit;
			digit *= 10;
		}else{
			break;
		}
	}
	return n;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"MasterOfDisaster", "DingBat", "Orpheus", "WolfMan", "MrKnowItAll"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "TygerTyger"; string Arg2 = "TygerTyger"; verify_case(0, Arg2, newMember(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"MasterOfDisaster", "TygerTyger1", "DingBat", "Orpheus", 
 "TygerTyger", "WolfMan", "MrKnowItAll"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "TygerTyger"; string Arg2 = "TygerTyger2"; verify_case(1, Arg2, newMember(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"TygerTyger2000", "TygerTyger1", "MasterDisaster", "DingBat", 
 "Orpheus", "WolfMan", "MrKnowItAll"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "TygerTyger"; string Arg2 = "TygerTyger"; verify_case(2, Arg2, newMember(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"grokster2", "BrownEyedBoy", "Yoop", "BlueEyedGirl", 
 "grokster", "Elemental", "NightShade", "Grokster1"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "grokster"; string Arg2 = "grokster1"; verify_case(3, Arg2, newMember(Arg0, Arg1)); }
	void test_case_4() { string Arr0[] = {"Bart4", "Bart5", "Bart6", "Bart7", "Bart8", "Bart9", "Bart10",
 "Lisa", "Marge", "Homer", "Bart", "Bart1", "Bart2", "Bart3",
 "Bart11", "Bart12"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Bart"; string Arg2 = "Bart13"; verify_case(4, Arg2, newMember(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	UserName ___test;
	___test.run_test(-1);
}
// END CUT HERE
