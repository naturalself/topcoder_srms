// BEGIN CUT HERE

// END CUT HERE
#line 5 "TheFansAndMeetingsDivTwo.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <set>

using namespace std;

class TheFansAndMeetingsDivTwo {
public:
	double find(vector <int> minJ, vector <int> maxJ, vector <int> minB, vector <int> maxB) {

	long double ret=0.0;
	set <int> viJ;
	set <int> viB;
	vector <long double> vdJ;
	vector <long double> vdB;

	for(int i=1;i<=50;i++){
		for(int j=0;j<(int)minJ.size();j++){
			if(minJ[j]<=i && maxJ[j]>=i){
				cout << "search[" << i << "]" << endl;
				for(int k=0;k<(int)minB.size();k++){
					cout << k << endl;
					if(minB[k]<=i && maxB[k]>=i){
						cout << "i=" << i << endl;
						viJ.insert(j);
						viB.insert(k);
					}
				}
				cout << "\n" << endl;
			}
		}
	//}
		cout << "Jsize" << (int)viJ.size() << endl;
		cout << "Bsize" << (int)viB.size() << endl;
		
		set<int>::iterator itJ = viJ.begin();
		while(itJ != viJ.end()){
			vdJ.push_back((long double)1.0/(maxJ[*itJ]-minJ[*itJ]+1));
			++itJ;
		}

		set<int>::iterator itB = viB.begin();
		while(itB != viB.end()){
			vdB.push_back((long double)1.0/(maxB[*itB]-minB[*itB]+1));
			++itB;
		}

		for(int p=0;p<(int)vdJ.size();p++){
			cout << "vdJ:" << vdJ[p] << endl;
			for(int q=0;q<(int)vdB.size();q++){
				cout << "vdB:" << vdB[q] << endl;
				ret += vdJ[p] * vdB[q];
			}
		}
		
		//initialize
		viJ.clear();
		viB.clear();
		vdJ.clear();
		vdB.clear();
	}

	cout << ret << endl;
	return ret/((long double)minJ.size()*(long double)minB.size());
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); double Arg4 = 0.3333333333333333; verify_case(0, Arg4, find(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arr0[] = {5, 7, 7, 1, 6, 1, 1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {8, 9, 7, 3, 9, 5, 3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {9, 12, 10, 14, 50, 9, 10}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {9, 13, 50, 15, 50, 12, 11}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); double Arg4 = 0.014880952380952378; verify_case(1, Arg4, find(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arr0[] = {44}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {47}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {4}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {7}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); double Arg4 = 0.0; verify_case(2, Arg4, find(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arr0[] = {1, 6, 3, 1, 4, 3, 5, 1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {7, 8, 5, 7, 9, 7, 9, 3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {5, 1, 5, 3, 1, 2, 4, 1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {9, 2, 7, 9, 4, 5, 4, 9}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); double Arg4 = 0.11562305130385474; verify_case(3, Arg4, find(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	TheFansAndMeetingsDivTwo ___test;
	___test.run_test(-1);
}
// END CUT HERE
