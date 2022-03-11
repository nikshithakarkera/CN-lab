#include<stdio.h>
void main()
{
int incoming,outgoing,buffersize,n,store=0,result;
printf("Enter no.of packets\n");
scanf("%d",&n);
printf("Enter buffersize\n");
scanf("%d",&buffersize); 
printf("Printf outgoing ratio\n");
scanf("%d",&outgoing);
while(n!=0)
{
printf("Enter the incoming packates\n");
scanf("%d",&incoming);
if(incoming<=buffersize-store)
{
store+=incoming;

}
else
{
result=(incoming-(buffersize-store));
printf("Dropped packet:\n");
store=buffersize;
}
store=store-outgoing;
n--;
}
}
