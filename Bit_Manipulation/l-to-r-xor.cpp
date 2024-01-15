int xor1(int n) {
    if(n%4 == 0) {
        return n;
    } else if(n%4 == 1) {
        return 1;
    } else if(n%4 == 2) {
        return n+1;
    } else {
        return 0;
    }
}

int findXOR(int L, int R){
    
    // int check = ((R-L)/2)%2; //checking if 1st or 2nd

    // if(L%2==1 && R%2==1) {
    //     if(check) {
    //         return L-1;
    //     } else {
    //         return L;
    //     }
    // }
    // else if(L%2==0 && R%2==0) {
    //     if(check) {
    //         return R+1;
    //     } else {
    //         return R;
    //     }
    // }
    // else if(L%2==1 && R%2==0) {
    //     if(check) {
    //         return R-L+1;
    //     } else {
    //         return R+L;
    //     }
    // }
    // else {
    //     if(check) {
    //         return 0;
    //     } else {
    //         return 1;
    //     }
    // }

    return xor1(L-1)^xor1(R);

}