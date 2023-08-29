int NthRoot(int n, int m) {
  // Write your code here.

  if(m == 1 || m == 0) return m;
  
  int l = 2;
  int r = m;

  while(l<=r)
  {
    int mid = l + (r-l)/2;

    if(pow(mid,n) == m) return mid;
    else if(pow(mid,n) > m) r = mid - 1;
    else l = mid + 1;
  }

  return -1;

}