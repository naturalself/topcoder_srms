// BEGIN CUT HERE

// END CUT HERE
#line 5 "AverageAverage.cpp"
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

class AverageAverage {
public:
	double average(vector <int> numList) {
#if 1	//How foolish!!!
	int sum=0,n;
	n=numList.size();
	for(int i=0;i<n;i++){
		sum +=numList[i];
	}
	return sum*1.0/n;
#else
	vector <int> num = numList;
	double ret=0;
	int n = (int)num.size();
	int i;
	int NN = 1<<n;
	
	for(i=1;i<NN;i++){
		double sum=0;
		int cnt=0;
		for(int j=0;j<n;j++){
			if( i&(1<<j)){
				sum+=numList[j];
				cnt++;
			}
		}
		ret += sum/cnt;
	}
	ret /= NN-1;
	
	return ret;

#endif
	}
private:
template <typename Iterator>
 inline bool next_combination(const Iterator first, Iterator k, const Iterator last)
 {
    if ((first == last) || (first == k) || (last == k))
       return false;
    Iterator itr1 = first;
    Iterator itr2 = last;
    ++itr1;
    if (last == itr1)
       return false;
    itr1 = last;
    --itr1;
    itr1 = k;
    --itr2;
    while (first != itr1)
    {
       if (*--itr1 < *itr2)
       {
          Iterator j = k;
          while (!(*itr1 < *j)) ++j;
          std::iter_swap(itr1,j);
          ++itr1;
          ++j;
          itr2 = k;
          std::rotate(itr1,j,last);
          while (last != j)
          {
             ++j;
             ++itr2;
          }
          std::rotate(k,itr2,last);
          return true;
       }
    }
    std::rotate(first,k,last);
    return false;
 }

	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1,2,3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 2.0; verify_case(0, Arg1, average(Arg0)); }
	void test_case_1() { int Arr0[] = {42}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 42.0; verify_case(1, Arg1, average(Arg0)); }
	void test_case_2() { int Arr0[] = {3,1,4,15,9}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 6.4; verify_case(2, Arg1, average(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	AverageAverage ___test;
	___test.run_test(-1);
}
// END CUT HERE
