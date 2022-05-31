#include <iostream>
using namespace std;
int leap(int n,int m){
int sum=0;
for(int i=n;i<=m;i++){
if(i%4==0){
sum=sum+1;
}
}
return sum;
}
void age_calc(int dob_y, int dob_m, int dob_d, int c_year, int c_month, int c_day){
int year=0,month=0,day=0;
int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int x=dob_m-1;
int i=dob_y;
int k=dob_d;
int l=dob_m;
int y=l;
int t=k;
int total_months=12;
int total_days=arr[x];
int storage;
while(i<=c_year){
while (y<=total_months){
while(t<=total_days){
day++;
t++;
}
month++;
x++;
if(i==c_year & y==c_month-1){
total_days=c_day;
}
storage=t-1;
t=1;
x=0;
y++;
}
if(i==c_year-1){
total_months=c_month;
}
i++;
if(i==c_year & y-1==c_month & storage==c_day){
break;
}
y=0;
if (i<=c_year){
year++;
}
}
int leap_year=leap(dob_y,c_year);
day=day+leap_year;
cout<<year<<" "<<month<<" "<<day;
}
int main()
{
int year,month,day,curr_year,curr_month,curr_day;
cin>>year>>month>>day>>curr_year>>curr_month>>curr_day;
age_calc(year,month,day,curr_year,curr_month,curr_day);
}