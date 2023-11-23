//#include<iostream>
//using namespace std;
//int main(){
//	int table=3, multiply;
//	for(int i=1; i<11; i++){
//		multiply=table*i;
//		cout<<i<<" * 3 "<<" = "<<multiply<<endl;
//	}
//	
//	return 0;
//}
//
//int main(){
//	int number;
//	bool larger = true;
//	cout<<"Enter a number:"<<endl;
//	cin>>number;
//	
//	if(number>10 && number<=20){
//		larger = true;
//		cout<<"1"<<endl;}
//	else{
//		larger = false;
//		cout<<"0"<<endl;
//	}
//	
//	return 0;
//}
//
//
//int main()
//{
//    int number, i,j,factors  ;
//    cout<<"Enter a number: ";
//    cin>>number;
//    i = number;
//    while (i >= 2) {
//        factors = 0;
//        j = 1;
//        while (j <= i) {
//            if (i%j==0) {
//                factors++;  }
//            j++;}
//    if (factors==2) {
//	cout<<"The largest prime number less than or equal to 'N':"<<i;
//  	break;
//    }
//        i--;
//    }
//    return 0;
//}
//		
//
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string one, two, swap;
//    swap = "";
//    cout<<"Enter the first string:";
//    cin>>one;
//    cout<<"Enter the second string:";
//    cin>>two;
//    if (one == two){
//        for (int i=0;i<one.length();i++){
//            swap=one[i]+swap;
//        }
//        cout<<"The strings are equal. Swapped string is equal to: ";
//        cout<<swap;
//        }
//        else {
//            cout<<"Strings are unequal";
//        
//        }
//    return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//int main() {
//    int dividend=40, divisor=5, quotient=0;
//    for(int i=dividend; i>=divisor; i-=divisor){
//        quotient++;
//    }
//    cout<<dividend<<" / "<<divisor<<" = "<<quotient<<endl;
//    return 0;
//}
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//    string phr= "heeelllooo";
//    string final= "";
//    for (int i = 0; i<phr.length(); i++) {
//        bool identical = false;
//        for (int j = 0; j<final.length(); j++) {
//            if (phr[i]==final[j]) {
//                identical=true;
//                break;
//            }}
//        if (!identical) {
//            final+=phr[i];}}
//
//    cout<<final<<endl;
//
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main() {
//    int x, y, i;
//    int arr[7] = {1,2,3,4,5};
//    cout<<"Enter two new integers:"<<endl;
//    cin>>x>>y;
//    for(int i=0; i<5; i++){
//        cout<<arr[i]<<endl;
//    }
//     arr[i] = x;
//     cout<<arr[i]<<endl;
//     arr[i+1] = y;
//     cout<<arr[i+1]<<endl;
//    return 0;
//}
//
//int main(){
//int X, a, sum, arr[10];	
//	cout<<" Enter 10 integers:"<<endl;
//	for(int x=0; x<10; x++){ 
//	cin>>arr[x];}
//    bool checked = false;
//	cout<<"Enter a value:"<<endl;
//	cin>>X;
//	cout<<"Triplets that sum up to the value 'X' are:";
//	for(int x=0; x<10; x++){
//		for(int y = 0; y<10; y++){
//			if(x==y)
//			continue;
//			for(int z=0; z<10; z++){
//				if(a==x || a==y)
//				continue;
//				sum=arr[x]+arr[y]+arr[z];
//				if (sum==X) {
//				cout<<"["<<arr[x]<<","<<arr[y]<<","<<arr[z]<<"]";
//				checked = true;}
//				}}}
//	return 0;
//}
//
//
//
//int main() {
//#define terms 10
//int arr[terms], k, i, j;
//   for(i=0;i<terms;i++)
//   {cout<<"Enter a number " <<i<<endl;
//   	cin>>arr[i]; }
//for(i = 0; i < terms-1; i++) { 
//      
//      for(j = 0; j < terms-1-i; j++) {
//         if(arr[j] > arr[j+1]) {
//            k = arr[j];
//            arr[j] = arr[j+1];
//            arr[j+1] = k;    }}}
//cout<<"Final array is :"<<endl;
//  cout << "[ ";
//
//   for(i = 0; i < terms; i++) {
//      cout << arr[i] <<" "; }
//   cout << "]" << endl;
//return 0;
//}

