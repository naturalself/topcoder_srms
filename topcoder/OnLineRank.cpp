// BEGIN CUT HERE

// END CUT HERE
#line 5 "OnLineRank.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class OnLineRank {
public:
	int calcRanks(int k, vector <int> scores) {

	vector <int> vi;
	int sum = 0;
	int rank = 0;

	int j=0;

	for(int i=0;i<(int)scores.size();i++){
		vi.push_back(scores[i]);

		sort(vi.begin(),vi.end());

		for(int j=0;j<(int)vi.size();j++){
			
			cout << vi[j] << endl;
			if(vi[j]==scores[i]){
				//cout << j+1 << endl;
				sum += (j+1);
				break;
			}
		}
		cout << "\n" << endl;
	}

	return sum;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arr1[] = {6,9,8,15,7,12}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 11; verify_case(0, Arg2, calcRanks(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 80; int Arr1[] = {3,3,3,3,3,3,3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 7; verify_case(1, Arg2, calcRanks(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	OnLineRank ___test;
	___test.run_test(-1);
}
// END CUT HERE
