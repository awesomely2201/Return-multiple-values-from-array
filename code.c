void multiReturnArray(int *a, int size, int *min, int *max, int *sum)
{
  int c=*a,d=*a,total=0;
  for(int i=0;i<size;i++)
  {
    if(c>*a)
      c=*a;
    if(d<*a)
      d=*a;
    total=total+*a;
    *a++;
  }
  *min=c;
  *max=d;
  *sum=total;
}
