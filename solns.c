/* Enter your solutions in this file */
#include <stdio.h>

//max function
int max(int arr[],int n)
{
 int i;
 int max;
  max=arr[0];
 for(i=1;i<n;i++)
 {
  if(arr[i]>max)
   max=arr[i];
 }
 return max;
}

//min function
int min(int arr[],int n)
{
 int i;
 int min;
 min=arr[0];
 for(i=1;i<n;i++)
 {
  if(arr[i]<min)
   min=arr[i]
 }
 return min;
}

//average function
float average(int arr[],int n)
{
 int sum=0;
 int i;
 for(i=0;i<n;i++)
  sum=sum+arr[i];
 return (float)sum/n;
}
//mode function

int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

//factor function
int factors(int num,int arr[])
{
 int i=0;
 while(num%2==0)
 {
  arr[i]=2;
  ++i;
  num=num/2;
 }
 int j;
 for(j=3;j<=sqrt(num);j=j+2)
 {
  while(num%j==0)
  {
   arr[i]=j;
   ++i;
   num=num/j;
  } 
 }
if(num > 2) {
     arr[i]=num;
     ++i;
   

return i;
}
