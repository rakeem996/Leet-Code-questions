bool isKthBitSet(int n, int k)
{
    // Write your code here.
    int i = n>>(k-1);

    if(i%2==1) return true;
    else return false;

}