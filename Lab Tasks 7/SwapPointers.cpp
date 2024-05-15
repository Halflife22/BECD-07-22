#include <iostream>

using namespace std;

void SwapNumbers(int* Va, int* Vb) {
	        int* temp;
		*temp = *Va;
		*Va = *Vb;
		*Va = *Vb;
		*Vb = *temp;
		
	}
	
int main(){
          int pVarA = 25 ;
	  int pVarB = 100;
	  cout << "Before swapping: pVarA = " << pVarA << ", pVarB = " << pVarB << endl;
	  
      SwapNumbers(&pVarA, &pVarB);
	  
	  cout << "After swapping: pVarA = " << pVarA << ", pVarB = " << pVarB << endl;
	  
     
	return 0;
}
    