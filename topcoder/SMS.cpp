// BEGIN CUT HERE

// END CUT HERE
#line 5 "SMS.cpp"
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

#define debug(p) cout << #p << "=" << p << endl;
#define forv(i, v) for (int i = 0; i < (int)(v.size()); ++i)
#define fors(i, s) for (int i = 0; i < (int)(s.length()); ++i)
#define all(a) a.begin(), a.end() 
#define pb push_back

class SMS {
public:
	string compress(string oM) {
	string ret;

	fors(i,oM){
		if(isV(oM[i-1])==false && isV(oM[i])==true){
		
		}else if(isV(oM[i])==true && isV(oM[i+1])==false){
		
		}else if(oM[i+1]==' '){
			ret += oM[i];
			//debug(ret);
		}else{
			ret += oM[i];
		}
	}

	return ret;
	}
private:
	bool isV(char c){
	bool r=false;
		if(c=='a'|| c=='i'|| c=='u'|| c=='e'|| c=='o'
		 ||c=='A'|| c=='I'|| c=='U'|| c=='E'|| c=='O'){
			r=true;
		}else{
			r=false;
		}
	return r;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "Lets meet tomorrow"; string Arg1 = "Lts mt tmrrw"; verify_case(0, Arg1, compress(Arg0)); }
	void test_case_1() { string Arg0 = "Please come to my party"; string Arg1 = "Plse cme to my prty"; verify_case(1, Arg1, compress(Arg0)); }
	void test_case_2() { string Arg0 = " I  like your   style "; string Arg1 = " I  lke yr   style "; verify_case(2, Arg1, compress(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	SMS ___test;
	___test.run_test(-1);
}
// END CUT HERE
