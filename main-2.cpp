#include <stdio.h>
using namespace std;
#include <iostream>
int main()
{
float Salary;
float tax;
float final_Salary;
 cout <<"please type your salary value"<<endl;
 cin >>Salary;
 if (Salary<=0){
     
     cout <<"The number has been entered is an invalid number , please enter the right number.."<<endl;
     
 }
 else if ( Salary>0 , Salary<150)   
 { 
    
    tax=0;
    final_Salary=Salary-tax;
    cout <<"tax applied is = "<<tax<<endl;
     cout <<"your final salary is = "<<final_Salary<<endl; 
 }
    
   else if (Salary>=150 ,Salary<300)   
 { 
    
    tax=25;
    final_Salary=Salary-tax;
     cout <<"tax applied is = "<<tax<<endl;
     cout <<"your final salary is = "<<final_Salary<<endl; 
 }
    
     else if (Salary>=300 ,Salary<500)   
 { 
    
    tax=50;
    final_Salary=Salary-tax;
     cout <<"tax applied is = "<<tax<<endl;
     cout <<"your final salary is = "<<final_Salary<<endl; 
 }

     else if (Salary>=500 ,Salary<800)   
 { 
    
    tax=80;
    final_Salary=Salary-tax;
     cout <<"tax applied is = "<<tax<<endl;
     cout <<"your final salary is = "<<final_Salary<<endl; 
 }

     else if (Salary>=800 ,Salary<1500)   
 { 
    
    tax=140;
    final_Salary=Salary-tax;
    cout <<"tax applied is = "<<tax<<endl;
     cout <<"your final salary is = "<<final_Salary<<endl;
 }

else 
{ 
    
    cout <<"The number has been entered is an invalid number , please enter the right number.."<<endl;


}

    return 0;
}