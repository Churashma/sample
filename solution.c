#include<stdio.h>
void main()
{
  int a[10],b[10],i,n,found=0
  printf("Enter the number of elements of the array\n");
  scanf("%d",&n);
  ptintf("Enter the array A\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the array B\n");
  for(i=0;i<n,i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]!=b[i])
    {
      found=1;
    }
  }
  if(found==0)
  {
    printf("arrays are equal\n");
  }
  else
  {
    printf("arrays are different\n");
    
  }
}
   
