// BEGIN CUT HERE

// END CUT HERE
#line 5 "LotteryCheating.cpp"
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

class LotteryCheating {
public:
	int minimalChange(string ID) {

	stringstream ss ;
	int n = (int)ID.size();
	int ret=n;
	
	//judge 0 identifier
	int p=0;
	fors(i,ID){
		if(ID[i]=='0')	p++;
	}
	if(p == n){
		return 0;
	}else{
		ret = min(ret,(n-p));
	}
		
	//judge n^2 identifier
	unsigned long long u=0;
	sscanf(ID.c_str(),"%llu",&u);

	unsigned long long  m;
	for(unsigned long long i=1;i<100000;i++){
		m = (unsigned long long)(i*i);
		if(m==u){
			return 0;
		}
	}

	if(ret == 1)	return ret;

	//search minimum change
	string str;
	vector <string> near;
	int best=(int)ID.size();
	p=0;
	
	for(unsigned long long i=1;i<100000;i++){
		m = (unsigned long long)(i*i);
		ss << m;
		ss >> str;
	
		if(str.size()<=ID.size()){
			while((int)ID.size()>(int)str.size()){
				str = "0" + str; 
			}
			for(int j=0;j<(int)str.size();j++){
				if(str[j] != ID[j]) p++;
			}
			best = min(p,best);
			p = 0;
		}else{
			break;
		}
		ss.str("");
		ss.clear(stringstream::goodbit);
	}

	ret = min(ret,best);

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6();}
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "1"; int Arg1 = 0; verify_case(0, Arg1, minimalChange(Arg0)); }
	void test_case_1() { string Arg0 = "1234"; int Arg1 = 2; verify_case(1, Arg1, minimalChange(Arg0)); }
	void test_case_2() { string Arg0 = "9000000000"; int Arg1 = 1; verify_case(2, Arg1, minimalChange(Arg0)); }
	void test_case_3() { string Arg0 = "4294967296"; int Arg1 = 0; verify_case(3, Arg1, minimalChange(Arg0)); }
	void test_case_4() { string Arg0 = "7654321"; int Arg1 = 3; verify_case(4, Arg1, minimalChange(Arg0)); }
	void test_case_5() { string Arg0 = "012509"; int Arg1 = 2; verify_case(5, Arg1, minimalChange(Arg0)); }
	void test_case_6() { string Arg0 = "07636"; int Arg1 = 1; verify_case(6, Arg1, minimalChange(Arg0)); }
// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	LotteryCheating ___test;
	___test.run_test(-1);
}
// END CUT HERE
