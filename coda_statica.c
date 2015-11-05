void enqueue(int lunghezza, int ultimate,int V[],int val)
{
  if(lunghezza>ultimate)
  {
    V[ultimate-1] = val;
    ultimate++;
  }
  else
    printf("Coda piena\n");
}

int dequeue(int lughezza, int ultimate, int v[])
{
  int tmp = v[0];
  int i;
  for(i=0;i<ultimate-1;i++)
  {
    v[i]=v[i+1];
  }
  return tmp;
}
