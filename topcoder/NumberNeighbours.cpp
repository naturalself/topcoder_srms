// BEGIN CUT HERE

// END CUT HERE
#line 5 "NumberNeighbours.cpp"
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

class NumberNeighbours {
public:
	int numPairs(vector <int> numbers) {

	int num=0;
	int tmp=0;
	int i_tmp=-1;
	int j_tmp=-1;
	int num1=0;
	int num2=0;
	int cnt = 0;
	int found=0;

	vector <int> digits[(int)numbers.size()];
	
	for(int i=0;i<(int)numbers.size();i++){
		num = numbers[i];
		
		cout << numbers[i] << endl;

		while(num!=0){
			tmp = num%10;
			digits[i].push_back(tmp);
			num /= 10;
		}
	}
	cout << "" << endl;
	
	num = 0;
	forv(i,numbers){
		sort(all(digits[i]));
		
		printf("i=%d\n",i);

		do{
			num1 = DigittoInt(digits[i]);
			printf("num1 = %d\n",num1);

			for(int j=i;j<(int)numbers.size();j++){
				if(j!=i){
					sort(all(digits[j]));
		
					do{
						num2 = DigittoInt(digits[j]);
						printf(" num2 = %d\n",num2);
				
						if(num1==num2){
							printf("		same = %d\n",num1);
							//cnt++;

							found++;
							if(i==i_tmp && j==j_tmp){
								printf("break i=%d j=%d\n",i,j);
								found++;
								break;
							}
							cnt++;
							i_tmp = i;
							j_tmp = j;
							printf("save i=%d j=%d\n",i,j);
						}

					}while(next_permutation(all(digits[j])));
					//cout << "" << endl;
					if(found!=0){
						found = 0;
						break;
					}
				}
			}
#if 0
			if(found!=0){
				found = 0;
				break;
			}
#endif
		}while(next_permutation(all(digits[i])));
		cout << "" << endl;
	}
		
	cout << cnt << endl;
	return cnt;
	}
private:
	int DigittoInt(vector <int> digi){

	int ret = 0;
	int m = (int)pow(10,(double)(digi.size()-1));
	for(int j=0;j<(int)digi.size();j++){
		ret += digi[j]*m;
		m /= 10;
	}
	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {10, 1, 100, 20, 2, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(0, Arg1, numPairs(Arg0)); }
	void test_case_1() { int Arr0[] = {204, 42, 40020, 200}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(1, Arg1, numPairs(Arg0)); }
	void test_case_2() { int Arr0[] = {1, 10, 100, 1000, 10000, 100000, 1000000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 21; verify_case(2, Arg1, numPairs(Arg0)); }
	void test_case_3() { int Arr0[] = {3, 33, 333, 3333}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(3, Arg1, numPairs(Arg0)); }
	void test_case_4() { int Arr0[] = {1024, 4021, 204, 303, 33, 603, 36, 55, 505}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(4, Arg1, numPairs(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	NumberNeighbours ___test;
	___test.run_test(2);
}
// END CUT HERE
