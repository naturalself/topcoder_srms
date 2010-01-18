// BEGIN CUT HERE

// END CUT HERE
#line 5 "Desertification.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Desertification {
public:
	int desertArea(vector <string> island, int T) {
	
	int row_size = (int)island.size();

	vector <string> Copyisland(row_size);

	int exist_D=0;
	int exist_F=0;
	int D_num=0;

	//if all cells are F
	for(int i=0;i<row_size;i++){
		if(island[i].find("D") != string::npos) exist_D++;
	}
	if(exist_D==0) return 0;

	//Copy all cells
	for(int i=0;i<row_size;i++)	Copyisland[i] = island[i];

	int column_size = (int)island[0].size();	//Assume rectangular grid.
	for(int year=0;year<T;year++){
		for(int i=0;i<row_size;i++){
			for(int j=0;j<column_size;j++){
				if(island[i][j] == 'D'){
					if(i!=0)				Copyisland[i-1][j] = 'D';	//up
					if(i!=row_size-1)		Copyisland[i+1][j] = 'D';	//down
					if(j!=0)				Copyisland[i][j-1] = 'D';	//left
					if(j!=column_size-1)	Copyisland[i][j+1] = 'D';	//right
				}
			}
			if(island[i].find("F") != string::npos) exist_F++;
		}
		//if all cells are D
		if(exist_F==0) break;
		
		exist_F = 0;
		
		//update cells
		for(int i=0;i<row_size;i++)	island[i] = Copyisland[i];
	}

	for(int i=0;i<row_size;i++){
		for(int j=0;j<column_size;j++){
			if(island[i][j]=='D') D_num++;
		}
		//cout << island[i] << endl;
	}

	return D_num;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"FFF",
 "FDF",
 "FFF"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; int Arg2 = 5; verify_case(0, Arg2, desertArea(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"FFF",
 "FDF",
 "FFF"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 9; verify_case(1, Arg2, desertArea(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"FFFFF",
 "FFDFF",
 "FFFFD",
 "FFFFF",
 "FFFFF"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 17; verify_case(2, Arg2, desertArea(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"FFFFFF",
 "FFFFFF",
 "FFFFFF",
 "FFFFFF"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1000000000; int Arg2 = 0; verify_case(3, Arg2, desertArea(Arg0, Arg1)); }
	void test_case_4() { string Arr0[] = {"FFFFFDFFFF",
 "FDFDFFFFFF",
 "FFFFFFFFFD",
 "FFFFFFFFFF",
 "DDFFFFFFFF", 
 "FFFFFFFFFD",
 "FFFFFFFFFF",
 "FFFFFFFDFF",
 "FFFFFFFDFF",
 "FFFFDDFFFF"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arg2 = 90; verify_case(4, Arg2, desertArea(Arg0, Arg1)); }
	void test_case_5() { string Arr0[] = {"FFFFFDFFFF",
 "FDFDFFFFFF",
 "FFFFFFFFFD",
 "FFFFFFFFFF",
 "DDFFFFFFFF", 
 "FFFFFFFFFD",
 "FFFFFFFFFF",
 "FFFFFFFDFF",
 "FFFFFFFDFF",
 "FFFFDDFFFF"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 98765432; int Arg2 = 100; verify_case(5, Arg2, desertArea(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	Desertification ___test;
	___test.run_test(-1);
}
// END CUT HERE
