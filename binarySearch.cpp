#include<iostream>
using namespace std;
bool binarySearch(int arr[],int size,int key)
{
int start=0;
int end=size-1;
int mid=(start+end)/2;
while(start<=end)
{
if(arr[mid]==key)
{
return mid;
}
if(key<arr[mid])
{
start=mid+1;
}
else
{
end=mid-1;
}
mid=(start+end)/2;
}
return-1;
}
int main()
{
int even[4]={2,4,6,8};
int odd[5]={1,3,5,7,9};
int index=binarySearch(even,4,6);
cout<<"index of 8 is "<<even <<endl;
return 0;
}

