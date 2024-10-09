#include<iostream>
using namespace std;
/*int a=10;
cout<<&a<<"\n";//this one printes out the memory location 
int *mysptr=&a;
cout<<mysptr<<"\n";//this one shows the memory location as "&a"
cout<<*mysptr<<"\n";//this one outputs the what is the values of momery location
*mysptr=20;//this one will change the values of "a" 
cout<<a<<endl;//and this one will output the updated value of "a"
int main(){
	


	//find the maximum element of each row in the matrix
	int max[4][3]={{1,2,3},{3,4,1},{10,11,7},{0,11,1}};
	int maximum=0;
	for(int i=0;i<4;i++)
	{
		if(maximum < max[i]){
			if(max[i]<max[0]<max[1]<2)
		}
		for(int j=0;j<3;j++)
		{
		  if(maximum<max[i][j])
		    {
		    	
			  cout<<"the maximum num of row "<<i+1<<":"<<maximum<<endl;
		    }
	   }
	}
*/
int main()
{
		int x=5;
	int *ptr=&x;
	
	/*
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<&x<<endl;
	cout<<x<<endl; 
	int **ptr2=&ptr;
	  cout << "Value of x: " << x <<*ptr<< endl;
    cout << "Address of x: " << &x<<ptr<< endl;
    cout << "Value of p: " <<*ptr<<x<< endl;
    cout << "Address of p: " <<ptr<<&x<< endl;
    cout << "Value of q: " <<ptr<< endl;
    cout << "Value at the address held by q: " <<ptr2<<&ptr<<endl;
    cout << "Value at the address held by *q: " <<**ptr2 << endl;
*/

 
	
int numbers[5],*p;
p=numbers; // this one is the same as p=&number[0]
*p=10; 
p++;/* this one is the same as p+1 which means p is 
      the pointer and 1 is the inedx number
      so that it will point to the 2nd element */
*p=20;
p=&numbers[2];//this one points the 2nd index and the 3rd element
*p=30;
p=numbers+3;
*p=40;
p=numbers;/*on this statment the pointer p points to the first element 
after this with *(ponter+index) synatx prints the elelment with in that inde*/
*(p+4)=50;
for(int i=0;i<5;i++){// this one the loop for printing each element of array pointed by the pointer p
	cout<<numbers[i]<<", ";
}










	return 0;
}
