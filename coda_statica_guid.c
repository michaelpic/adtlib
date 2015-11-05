int inserimento(int V[] , int val , int pos , int l )
{
  if ( V[l]== 0)
    return 0;
  else
    V[pos] = val;
    
    pos++;
    return pos;
}

int estrai( int V [] , int l )
{
  int n = V[0];
  for (int i = 0 ; i < l ; i++)
    V[i] = V[i+1]
    
  return n ;
}

void cancella(int V[] , int l , int pos_canc)
{
  for (int i = pos_canc ; i < l ; i++)
    V[i] = V[i+1];
}

