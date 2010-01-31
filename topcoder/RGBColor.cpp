// BEGIN CUT HERE

// END CUT HERE
#line 5 "RGBColor.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class RGBColor {
public:
	vector <int> getComplement(vector <int> rgb) {

	vector <int> ret(3);
	
	ret[0] = 255 - rgb[0];
	ret[1] = 255 - rgb[1];
	ret[2] = 255 - rgb[2];

	if(abs(rgb[0]-ret[0])<=32 
	&& abs(rgb[1]-ret[1])<=32
	&& abs(rgb[2]-ret[2])<=32){
		
		if((rgb[0]+128)<=255) ret[0]=rgb[0]+128; else ret[0] =rgb[0]-128;
		if((rgb[1]+128)<=255) ret[1]=rgb[0]+128; else ret[1] =rgb[1]-128;
		if((rgb[2]+128)<=255) ret[2]=rgb[0]+128; else ret[2] =rgb[2]-128;
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arr0[] = {255,0,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = { 0,  255,  255 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, getComplement(Arg0)); }
	void test_case_1() { int Arr0[] = {115,115,143}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = { 243,  243,  15 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, getComplement(Arg0)); }
	void test_case_2() { int Arr0[] = {115,115,144}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = { 140,  140,  111 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, getComplement(Arg0)); }
	void test_case_3() { int Arr0[] = {153,12,55}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = { 102,  243,  200 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, getComplement(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	RGBColor ___test;
	___test.run_test(-1);
}
// END CUT HERE
