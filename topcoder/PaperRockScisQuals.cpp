// BEGIN CUT HERE

// END CUT HERE
#line 5 "PaperRockScisQuals.cpp"
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

class PaperRockScisQuals {
public:
	int whoPassed(vector <string> players) {
	int m=(int)players.size();		//players num.
	int n=(int)players[0].size();	//game cnt.
	int ret=0;
	
	int memo[m][n];
	memset(memo,0x00,sizeof(memo));

	forv(i,players){
		forv(j,players){
			if(i!=j){
				int cnt=0;
				fors(k,players[i]){
					if(Iswon(players[i][k],players[j][k])){
						cnt += 1;
					}else{
						cnt -=1;
					}
				}
				if(cnt ==0){
					memo[i][j] += 5;
				}else if(cnt < 0 ){
					memo[i][j] += 10;
				}else{
					memo[i][j] -= 10;
				}
			}
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",memo[i][j]);
		}
		printf("\n");
	}


	return ret;
	}
private:
	bool Iswon(char fir,char sec){
	bool r=false;

	if(fir=='P' && sec=='R'){
		return false;				
	}else if(fir=='P' && sec=='S'){
		return true;
	}else if(fir=='R' && sec=='P'){
		return false;
	}else if(fir=='R' && sec=='S'){
		return true;
	}else if(fir=='S' && sec=='R'){
		return false;
	}else if(fir=='S' && sec=='P'){
		return true;
	}

	return r;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"PPRRS","PPRRP","PPRSP","PPSSP"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(0, Arg1, whoPassed(Arg0)); }
	void test_case_1() { string Arr0[] = {"RRRRR","PPPPP","RRRRR","PPPPP"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(1, Arg1, whoPassed(Arg0)); }
	void test_case_2() { string Arr0[] = {"RRRRR","PPPPP","SSSSS","PPPPP"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, whoPassed(Arg0)); }
	void test_case_3() { string Arr0[] = {"RRRRR","PPPPP","SSSSS","SSSSS","RRRRR","RRRRR"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(3, Arg1, whoPassed(Arg0)); }
	void test_case_4() { string Arr0[] = {"PPRPS","RRRPR","SSPRS","SSPRR","PPRSP","SPRPS","SPRSP","PRSPR","PRSPR"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; verify_case(4, Arg1, whoPassed(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	PaperRockScisQuals ___test;
	___test.run_test(0);
}
// END CUT HERE
