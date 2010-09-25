// BEGIN CUT HERE

// END CUT HERE
#line 5 "SandwichBar.cpp"
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

class SandwichBar {
public:
	int whichOrder(vector <string> av, vector <string> ord) {
	set<string> s_av;
	forv(i,av){
		s_av.insert(av[i]);
	}
	vector <string> v_av;
	set<string>::iterator it = s_av.begin();
	while(it != s_av.end()){
		v_av.pb(*it);
		++it;
	}
	
	forv(i,ord){
		set<string> elem;
		string tmp;
		stringstream ss(ord[i]); 
		while(ss){
			ss >> tmp;
			elem.insert(tmp);
		}
		set<string>::iterator it = elem.begin();
		vector<string> v_elem;
		while( it != elem.end() ){
			v_elem.pb(*it);
			++it;
		}
		int cnt=0;
		int fit=0;
		forv(j,v_elem){
			forv(k,v_av){
				if(v_elem[j]==v_av[k]){
					fit++;
					break;
				}
			}
			cnt++;
		}
		if(cnt==fit){
			return i;
		}
	}

	return -1;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = { "ham", "cheese", "mustard" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "ham cheese" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; verify_case(0, Arg2, whichOrder(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = { "cheese", "mustard", "lettuce" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "cheese ham", "cheese mustard lettuce", "ketchup", "beer" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; verify_case(1, Arg2, whichOrder(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = { "cheese", "cheese", "cheese", "tomato" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "ham ham ham", "water", "pork", "bread", "cheese tomato cheese", "beef" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 4; verify_case(2, Arg2, whichOrder(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = { "foo", "bar", "baz", "gazonk", "quux", "bat", "xyzzy",
  "shme", "hukarz", "grault", "waldo", "bleh" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "kalatehas", "spam eggs", "needle haystack", "bleh blarg", "plugh", 
  "the best sandwich in the universe" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -1; verify_case(3, Arg2, whichOrder(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	SandwichBar ___test;
	___test.run_test(-1);
}
// END CUT HERE
