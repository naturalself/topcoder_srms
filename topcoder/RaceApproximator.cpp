// BEGIN CUT HERE

// END CUT HERE
#line 5 "RaceApproximator.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>

using namespace std;

class RaceApproximator {
public:
	string timeToBeat(int d1, int t1, int d2, int t2, int raceDistance) {

	stringstream res;

	long double time0 = (long double)(log(t2)-log(t1));

	long double time1 = (long double)((log(d1)-log(raceDistance)));

	long double time2 = (long double)((log(d1)-log(d2)));

	long double time3 = (long double)(time0*time1/time2);

	long double time4 = (long double)(t1*exp(time3));

	cout << time4 << endl;
		
	res << (int)time4/3600 << ":";

	time0 = (int)time4/3600;

	if((int)(time4/60-(time0)*60)<10) res << "0";

	res << (int)(time4/60-(time0)*60) << ":";

	if((int)time4%60<10) res << "0";

	res << (int)time4%60;

	cout << res.str() << endl;

	return res.str();
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 800; int Arg1 = 118; int Arg2 = 5000; int Arg3 = 906; int Arg4 = 1500; string Arg5 = "0:03:57"; verify_case(0, Arg5, timeToBeat(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_1() { int Arg0 = 400; int Arg1 = 65; int Arg2 = 1600; int Arg3 = 350; int Arg4 = 800; string Arg5 = "0:02:30"; verify_case(1, Arg5, timeToBeat(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_2() { int Arg0 = 1600; int Arg1 = 299; int Arg2 = 10000; int Arg3 = 2360; int Arg4 = 5000; string Arg5 = "0:18:00"; verify_case(2, Arg5, timeToBeat(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_3() { int Arg0 = 100; int Arg1 = 17; int Arg2 = 10000; int Arg3 = 4500; int Arg4 = 9000; string Arg5 = "1:06:00"; verify_case(3, Arg5, timeToBeat(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_4() { int Arg0 = 156; int Arg1 = 117; int Arg2 = 3863; int Arg3 = 2754; int Arg4 = 1755; string Arg5 = "0:21:06"; verify_case(4, Arg5, timeToBeat(Arg0, Arg1, Arg2, Arg3, Arg4)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	RaceApproximator ___test;
	___test.run_test(-1);
}
// END CUT HERE
