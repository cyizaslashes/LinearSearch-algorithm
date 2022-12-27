#include <iostream>

/*    Names:Cyiza Mugabo Christian 
Github:https://github.com/cyizaslashes

  */
using  namespace std;

 void LinearSearch(){


int arr[]={12,23,45,6,7,89,31};
	 int TargetValue,result;
	 cout<< "\n Enter a number to search for:\n";
	 cin>>TargetValue;
	 
	
for (result =0; result < 6; result++){
     
   
	
	if (arr[result] == TargetValue){
		
cout<< "The number" << "  "<<arr[result] << "  "<<"was found at the position:"<<"  " << result << endl;
		break;
	} 
	
	
}
	if(result== 6){
		
		 cout<< "The number"<< " " << TargetValue << " "<< "was not found in the list";
	}
}
int main(){
	
LinearSearch();
return 0;
	

	
}
