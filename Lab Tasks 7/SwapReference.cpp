#include <iostream>

using namespace std;

void SwapNumbers(int& Va, int& Vb) {
	    
		int temp = Va;
		Va = Vb;
		Vb = temp;
		
	}
	
int main(){
      int VarA =25;
	  int VarB =100;
	  cout << "Before swapping: VarA = " << VarA << ", VarB = " << VarB << endl;
	  
      SwapNumbers(VarA, VarB);
	  
	  cout << "after swapping: VarA = " << VarA << ", VarB = " << VarB << endl;
	  
	return 0;
}
    